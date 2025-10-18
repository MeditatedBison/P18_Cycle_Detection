/*
 * Author: Sarvesh Soni
 * Project: P18 - Cycle Detection in a Graph
 * Date: October 2025
 *
 * Description:
 * This program checks for cycles in a directed graph. It reads a graph
 * from a CSV file and uses a Depth-First Search (DFS) algorithm to find out
 * if there are any circular dependencies.
 */

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>

// A pretty standard Graph class to represent the graph
class Graph {
private:
    int numVertices;
    // Using a vector of vectors for the adjacency list.
    // adj[i] will contain a list of all vertices reachable from vertex i.
    std::vector<std::vector<int>> adj;

    // This is the recursive helper function for DFS. It does the real work.
    bool hasCycleUtil(int v, std::vector<bool>& visited, std::vector<bool>& recursionStack) {
        // Mark the current node as visited and add it to our current path (recursion stack)
        visited[v] = true;
        recursionStack[v] = true;

        // Check all the neighbors of the current vertex
        for (int neighbor : adj[v]) {
            // If the neighbor hasn't been visited, then recurse on it
            if (!visited[neighbor]) {
                if (hasCycleUtil(neighbor, visited, recursionStack)) {
                    return true; // Cycle found downstream
                }
            }
            // If the neighbor is already in our current path, we've found a cycle!
            else if (recursionStack[neighbor]) {
                return true;
            }
        }

        // If we've explored all neighbors and returned, this node is no longer in our current path.
        recursionStack[v] = false;
        return false;
    }

public:
    // Constructor
    Graph(int V) {
        this->numVertices = V;
        adj.resize(V);
    }

    // Function to add an edge to the graph
    void addEdge(int u, int v) {
        // Make sure we don't go out of bounds
        if (u < numVertices && v < numVertices) {
            adj[u].push_back(v);
        }
    }

    // The main function to check for a cycle
    bool hasCycle() {
        std::vector<bool> visited(numVertices, false);
        std::vector<bool> recursionStack(numVertices, false);

        // We have to check every node in case the graph is not connected
        for (int i = 0; i < numVertices; i++) {
            if (!visited[i]) {
                if (hasCycleUtil(i, visited, recursionStack)) {
                    return true;
                }
            }
        }
        return false;
    }
};

// --- Main Program ---
int main() {
    std::cout << "Starting the Cycle Detection Program..." << std::endl;

    // The dataset nodes go up pretty high, so let's set a safe max size.
    const int MAX_VERTICES = 8000;
    Graph dependencyGraph(MAX_VERTICES);

    std::string filename = "../data/dataset.csv";
    std::ifstream dataFile(filename);

    // Always good to check if the file actually opened
    if (!dataFile.is_open()) {
        std::cerr << "FATAL ERROR: Could not open file: " << filename << std::endl;
        std::cerr << "Make sure 'dataset.csv' is in the 'data' folder." << std::endl;
        return 1; // Exit with an error code
    }

    std::cout << "Successfully opened " << filename << ". Reading data..." << std::endl;

    std::string line;
    int edgesLoaded = 0;
    
    // The first line is the header (SOURCE, TARGET, RATING, TIME), so we just read and discard it.
    std::getline(dataFile, line);

    // Now, let's loop through the rest of the file
    while (std::getline(dataFile, line)) {
        std::stringstream lineStream(line);
        std::string sourceStr, targetStr;

        // The data is comma-separated. We only need the first two columns.
        std::getline(lineStream, sourceStr, ',');
        std::getline(lineStream, targetStr, ',');
        
        // The values from the file are strings, so we need to convert them to integers.
        // A try-catch block is good practice in case some line is formatted weirdly.
        try {
            int sourceNode = std::stoi(sourceStr);
            int targetNode = std::stoi(targetStr);
            dependencyGraph.addEdge(sourceNode, targetNode);
            edgesLoaded++;
        } catch (...) {
            // Just ignore lines that can't be parsed
        }
    }

    std::cout << "Finished reading data. Loaded " << edgesLoaded << " edges into the graph." << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "Running Depth-First Search to detect cycles..." << std::endl;

    if (dependencyGraph.hasCycle()) {
        std::cout << "RESULT: A cycle was detected in the graph." << std::endl;
    } else {
        std::cout << "RESULT: No cycles were found in the graph." << std::endl;
    }

    return 0;
}
