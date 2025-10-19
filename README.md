# P18: Cycle Detection in a Graph : Team VISA

**Author:** Sarvesh Soni, Vijit Tripathi
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

<img width="1076" height="518" alt="image" src="https://github.com/user-attachments/assets/c16c036e-d6b5-4089-8731-ac70252991a4" />


## Presentation 

I've attached the Project report in the files, it's Project Report.pdf. 
But here's a summarized Presentation (which was optional) :
https://gamma.app/docs/Cycle-Detection-in-Directed-Graphs-x1b2jmh49aypylf
