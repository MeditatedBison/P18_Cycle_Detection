# Project 18: Cycle Detection in a Graph

**Author:** Sarvesh Soni
**ISI Bangalore, B.Math 3rd Year**

## About The Project

For this project, my goal was to write a C++ program to find cycles in a directed graph. I used a Depth-First Search (DFS) algorithm because it's a very natural way to explore a graph and find "back edges" that create a cycle.

This is an important problem because cycles in a dependency graph can mean a "deadlock". For example, if Package A needs B, and B needs A, you can't install either. My program is built to find these kinds of situations.

I tested it with the **Bitcoin-Alpha trust network dataset** from the SNAP website.

### Main Features
*   It figures out the graph size on its own by reading the file first.
*   It not only detects a cycle but also prints the path of the first one it finds.
*   The DFS algorithm is efficient, with a time complexity of O(V+E).

## File Structure

-   `/src`: Contains the main C++ source code (`main.cpp`).
-   `/data`: Contains the `dataset.csv` file.
-   `Makefile`: For easy, one-command compilation.
-   `Project_Report.pdf`: The final report with all my analysis.

## How to Compile and Run

You will need `g++` and `make` installed.

1.  **Open your terminal** in the project's root folder.

2.  **To compile**, just run `make`:
    ```
    make
    ```
    This will create an executable named `cycle_detector`.

3.  **To run the program:**
    ```
    ./cycle_detector
    ```

### Expected Output

The program will tell you if it found a cycle. If it does, it will look something like this:

<img width="1052" height="494" alt="image" src="https://github.com/user-attachments/assets/3a38637a-4b04-40f0-bc12-3f55bf27a5d9" />
