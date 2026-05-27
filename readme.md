# 🧠 A* Algorithms — Discrete Structure (CO1007)

<div align="center">

![HCMUT](https://img.shields.io/badge/HCMUT-BK_official-blue?style=flat-square)
![C++](https://img.shields.io/badge/C++-17-blue?style=flat-square&logo=c%2B%2B)
![A*](https://img.shields.io/badge/A*-Pathfinding-red?style=flat-square)
![License](https://img.shields.io/badge/License-MIT-green?style=flat-square)

<h3><strong>Lam Duc Anh Khoa</strong></h3>
<p><strong>University of Technology — Vietnam National University, HCM City</strong></p>

</div>

---

## 📌 Table of Contents

- [Overview](#-overview)
- [Tasks](#-tasks)
- [Project Structure](#-project-structure)
- [Requirements](#-requirements)
- [Compilation & Run](#-compilation--run)
- [Output Example](#-output-example)
- [Report](#-report)
- [Author](#-author)
- [License](#-license)

---

## 📖 Overview

This project implements the **A* (A-star) search algorithm** to solve four practical pathfinding problems as part of the **CO1007 Discrete Structure** course assignment.

A* combines the strengths of Dijkstra's algorithm and Greedy Best-First Search using the evaluation function:

$$
f(n) = g(n) + h(n)
$$

- `g(n)`: actual cost from start to current node  
- `h(n)`: heuristic estimate from current node to goal  
- `f(n)`: total estimated cost through node `n`

---

## 🧩 Tasks

| # | Task | Heuristics | Moves |
|---|------|------------|-------|
| 1 | 👥 Social Network (Degree of Separation) | Reverse BFS | Directed edges |
| 2 | 🚁 Drone Delivery | Manhattan, Euclidean, Chebyshev | Weighted graph |
| 3 | 🤖 Warehouse Robot Navigation | Manhattan, Chebyshev | 8-directional (cardinal 1.0, diagonal 1.5) |
| 4 | 🏃 Evacuation Route Planning | Manhattan, Chebyshev | Grid → Weight Matrix conversion |

---

## 📁 Project Structure
📦 your-student-id/
├── 📄 main.cpp              # Demo & test cases
├── 📄 Algo.h                # Function declarations
├── 📄 Algo.cpp              # A* implementations for all tasks
├── 📄 PathNode.h            # PathNode struct definition
├── 📄 PathNode.cpp          # PathNode implementations (if any)
└── 📄 2510117.pdf   # Report


---

## ⚙️ Requirements

- **Compiler**: C++17 or later
- **Allowed libraries**: `<iostream>`, `<fstream>`, `<string>`, `<cmath>`, `<vector>`, `<algorithm>`
- **No external libraries**

---

## 🚀 Compilation & Run

```bash
g++ main.cpp Algo.cpp -o main
./main