# C++ `std::vector` Architecture & Theory

`std::vector` is a sequence container in the C++ Standard Template Library (STL) that represents a dynamic, resizable array. Elements are stored sequentially in contiguous memory locations, combining the constant-time element access of C-style arrays with dynamic memory allocation.

---

## 1. Dynamic Memory Architecture

Unlike static C-style arrays, which have fixed sizes allocated on the stack, `std::vector` manages a dynamically allocated heap buffer.

A typical `std::vector` implementation maintains three internal pointers:
* `begin`: Pointer to the first element in the allocated memory block.
* `end`: Pointer past the last constructed element.
* `end_of_storage`: Pointer past the total capacity of the allocated memory block.
