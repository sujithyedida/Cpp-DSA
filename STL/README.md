# C++ Standard Template Library (STL)

This directory contains code examples, practice exercises, and notes focusing on the C++ Standard Template Library (STL). The focus is on learning and utilizing built-in generic containers, iterators, and library algorithms.

## 📌 Topics & Contents

### 1. Containers
* **Sequential Containers**
  * `std::vector` – Dynamic arrays, capacity vs. size, memory reallocation.
  * `std::deque` – Double-ended queues.
  * `std::list` & `std::forward_list` – Doubly and singly linked list wrappers.
* **Container Adaptors**
  * `std::stack` – LIFO interface.
  * `std::queue` – FIFO interface.
  * `std::priority_queue` – Max-heaps and min-heaps (`std::greater`).
* **Associative & Unordered Containers**
  * `std::set` & `std::multiset` – Self-balancing BSTs (ordered unique/duplicate keys).
  * `std::map` & `std::multimap` – Key-value pairs stored in BSTs.
  * `std::unordered_set` & `std::unordered_map` – Hash-table-based lookup ($O(1)$ average time).

### 2. Iterators
* Basic iterator operations (`begin()`, `end()`, `rbegin()`, `rend()`).
* Forward, bidirectional, and random-access iterators.
* Constant iterators (`cbegin()`, `cend()`) and `std::advance` / `std::next`.

### 3. STL Algorithms (`<algorithm>`)
* **Sorting & Searching:** `std::sort`, `std::stable_sort`, `std::binary_search`, `std::lower_bound`, `std::upper_bound`.
* **Modifying Utilities:** `std::reverse`, `std::rotate`, `std::fill`, `std::transform`.
* **Non-modifying Utilities:** `std::find`, `std::count`, `std::min_element`, `std::max_element`.
* **Custom Comparators:** Passing lambdas and custom functions to algorithms.

---

## 🚀 How to Run

Compile any file using `g++` with C++17 or C++20 support:

```bash
g++ -std=c++17 filename.cpp -o output
./output
