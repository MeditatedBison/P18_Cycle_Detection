# P18: Cycle Detection in a Graph : Team VISA

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

## Presentation 

<img width="2400" height="1350" alt="image" src="https://github.com/user-attachments/assets/8ec7f3a1-298f-4e71-b1b3-37b03e0ded48" />

<img width="2400" height="1350" alt="image" src="https://github.com/user-attachments/assets/0494b6a6-f4da-4c64-95b2-8141276b803c" />

<img width="2400" height="1350" alt="image" src="https://github.com/user-attachments/assets/a3d2b5c5-01d5-4516-96af-055eebd1f25f" />

<img width="2400" height="1350" alt="image" src="https://github.com/user-attachments/assets/f5a8f728-42d7-43f9-a93e-a027314bf0fb" />

<img width="2400" height="1350" alt="image" src="https://github.com/user-attachments/assets/2a03a0f8-39a3-4489-b43c-a5befba1359e" />

<img width="2400" height="1350" alt="image" src="https://github.com/user-attachments/assets/2a903f8e-7cd3-4fe8-bf06-1596bc88bf02" />



<img width="2400" height="1350" alt="image" src="https://github.com/user-attachments/assets/6454daf4-da68-4e4f-9e7f-6a0b3d63caa7" />

