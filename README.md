# Project 18: Cycle Detection in a Graph

**Author:** Sarvesh Soni

This project is a C++ program built to detect cycles in a directed graph. It uses a Depth-First Search (DFS) algorithm to traverse the graph and identify any back edges that form a cycle.

The program was tested using the Bitcoin-Alpha trust network dataset from the Stanford Network Analysis Project (SNAP).

---

### File Structure

-   `/src`: Contains the C++ source code (`main.cpp`).
-   `/data`: Contains the dataset used for the experiment (`dataset.csv`).

---

### How to Compile and Run

You will need a C++ compiler like `g++` installed on your system.

**1. Open your terminal in the root folder of this project (`P18_Cycle_Detection`).**

**2. Compile the program using the following command:**

```bash
g++ src/main.cpp -o cycle_detector
