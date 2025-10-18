# Problem 18: Cycle Detection in a Graph

**Author:** Sarvesh Soni
**Date:** October 17, 2025

## About The Project

This project is a C++ implementation of a cycle detection algorithm for directed graphs. It uses a Depth-First Search (DFS) based approach to traverse the graph and identify "back edges," which are indicative of a cycle.

The primary goal is to determine if a given graph, representing a network of dependencies or trust relationships, contains any circular patterns (e.g., A -> B -> C -> A). Such cycles can represent deadlocks or logical inconsistencies in real-world systems.

The program was tested using the **Bitcoin-Alpha trust network dataset** from the Stanford Network Analysis Project (SNAP).

### Key Features
*   **Dynamic Graph Sizing:** Automatically determines the required graph size by parsing the dataset.
*   **Cycle Identification:** Not only detects if a cycle exists, but also prints the nodes forming the first cycle found.
*   **Efficient Algorithm:** Implements an O(V + E) time complexity DFS algorithm.

## File Structure

-   `/src`: Contains the main C++ source code (`main.cpp`).
-   `/data`: Contains the dataset used for the experiment (`dataset.csv`).
-   `Makefile`: For easy compilation.
-   `Project_Report.pdf`: The final summary and analysis of the project.

## How to Compile and Run

You will need a C++ compiler like `g++` and `make` installed on your system.

1.  **Open your terminal** in the root folder of this project (`P18_Cycle_Detection`).

2.  **Compile the program** using the provided Makefile with the following command:
    ```sh
    make
    ```
    This will create an executable file named `cycle_detector` in the root directory.

3.  **Run the program:**
    ```sh
    ./cycle_detector
    ```

### Expected Output

The program will first parse the dataset to build the graph and then run the DFS algorithm. The final output will state whether a cycle was detected and, if so, will print the path of the first cycle found.

Example output if a cycle is found:

<img width="1052" height="450" alt="image" src="https://github.com/user-attachments/assets/85177b1d-c72e-4f4d-ae8c-cb1500100ec6" />

