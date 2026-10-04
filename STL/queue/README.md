# C++ Queue Implementation

A lightweight, efficient C++ implementation of a First-In, First-Out (FIFO) Queue data structure. This repository provides both custom memory-managed queue implementations (array-based and linked-list-based) alongside standard usage patterns using `std::queue`.

## Overview

A **Queue** is a linear data structure that operates on the **FIFO (First In, First Out)** principle: the element added first is the one retrieved first. Elements are inserted at the **rear** (back) and removed from the **front**.

### Key Features
- **Dynamic & Fixed Variations:** Includes both array-backed (circular buffer) and dynamic linked-list implementations.
- **Exception-Safe Operations:** Handles common edge cases like queue underflow and overflow gracefully.
- **Header-Only Design:** Easy to drop directly into existing C++ projects without build configuration overhead.

### Time & Space Complexity

| Operation | Time Complexity | Description |
| :--- | :--- | :--- |
| `push()` / `enqueue()` | $O(1)$ | Inserts an element at the rear |
| `pop()` / `dequeue()` | $O(1)$ | Removes the element from the front |
| `front()` | $O(1)$ | Accesses the element at the front |
| `back()` | $O(1)$ | Accesses the element at the rear |
| `empty()` | $O(1)$ | Checks if the queue contains no elements |
| `size()` | $O(1)$ | Returns total count of stored elements |
| **Space Complexity** | $O(N)$ | Where $N$ is the number of elements |

### Applications
- **Task & Job Scheduling:** CPU scheduling, printer spooling, and asynchronous task processing.
- **Graph Algorithms:** Essential data structure for Breadth-First Search (BFS).
- **Buffering:** Managing data streams, packet buffers in networking, and IO pipelines.
