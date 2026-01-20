# 🧠 Utils — Data Structures & Algorithms Library (C++)

Welcome to **Utils**, a personal C++ project focused on **Data Structures (DS)** and **Algorithms**, implemented **from scratch** as part of my academic studies.

This repository is designed to be:

- 📚 **Educational** — aligned with academic course material  
- 🧩 **Modular & Generic** — templates, interfaces, clean separation  
- ⚙️ **Practical** — usable, testable, extendable  
- ✍️ **Readable** — clear naming, summaries, and complexity analysis  

❗ **STL is avoided where possible** in order to fully understand internal mechanics.

---

## 📂 Project Structure


```text
utils/
├── ds/
│   ├── linked_list.hpp   // Custom doubly linked list
│   ├── stack.hpp         // Stack (array / linked-list based)
│   ├── queue.hpp         // Queue
│   ├── bst.hpp           // Binary Search Tree
│   ├── avl.hpp           // AVL Tree
│   └── heap.hpp          // Binary Heap
│
├── algo/
│   ├── graph_ds/
│   │   ├── graph.hpp     // Graph ADT
│   │   ├── adj_list.hpp  // Adjacency List
│   │   └── adj_matrix.hpp// Adjacency Matrix
│   │
│   ├── bfs.hpp
│   ├── dfs.hpp
│   └── dijkstra.hpp
│
├── core/
│   ├── complexity.hpp
│   ├── timer.hpp
│   └── debug.hpp
│
├── demos/
│   └── linked_list_demo.cpp
│
└── utils.hpp

```
---

# 🔗 1. `linked_list<T>` — Doubly Linked List

A **generic doubly linked list** implemented **without STL**.

### Internal Structure

Each node contains:

- `info` — stored value  
- `next` — pointer to next node  
- `prev` — pointer to previous node  

---

## 🔧 Constructors

### `linked_list()`
- **Purpose**: Initialize an empty list  
- **Cost**: Θ(1)

### `linked_list(const T value)`
- **Purpose**: Initialize list with a single node  
- **Cost**: Θ(1)

---

## ➕ Insertion Functions

### `void push_front(const T& value)`
- Insert element at the beginning  
- **Cost**: Θ(1)

### `void push_back(const T& value)`
- Insert element at the end  
- **Cost**: Θ(1)

---

## 🔍 Search Functions

### `bool search(const T& value) const`
- Check if value exists  
- **Cost**: Θ(n)

### `Node<T>* findNode(const T& value) const`
- Return pointer to node or `nullptr`  
- **Cost**: Θ(n)

---

## ❌ Deletion Functions

### `bool nodeToDelete(const T& value)`
- Delete node by value  
- **Method**: Search + pointer-based deletion  
- **Cost**: Θ(n)

### `void deleteAfter(Node<T>* prevNode)`
- Delete node after given predecessor  
- **Academic equivalent**: `Delete(r, p)`  
- **Cost**: Θ(1)

---

## 📊 Summary Table — Linked List

| Operation           | Time Complexity |
|---------------------|-----------------|
| push_front          | Θ(1)            |
| push_back           | Θ(1)            |
| search              | Θ(n)            |
| delete by value     | Θ(n)            |
| delete by pointer   | Θ(1)            |

---

### 🧪 Demo (How To Use)

```cpp
linked_list<int> list;
list.push_back(10);
list.push_back(20);
list.push_front(5);
list.nodeToDelete(20);

# Full example in "demos/linked_list_demo.cpp"

# 🌐 2. Graph ADT (`Graph`)

An **abstract interface** defining *what a graph is*, not how it is stored.

### Core Properties
- Vertices (V)
- Edges (E)
- Representation (List / Matrix)

### Pure Virtual Interface

```cpp
virtual int vertexCount() const = 0;
virtual bool hasEdge(int src, int dest) const = 0;
virtual void addEdge(int src, int dest) = 0;
virtual void removeEdge(int src, int dest) = 0;


📑 3. AdjListGraph — Adjacency List Graph
Representation: list of neighbors per vertex

Internally uses custom linked_list

Space Complexity
scss
Copy code
Θ(|V| + |E|)
Degree Calculations
Out-degree: Θ(1)

In-degree: Θ(|E|)

🔎 4. Graph Algorithms
BFS — Breadth-First Search
Uses queue

Cost: Θ(|V| + |E|)

DFS — Depth-First Search
Uses recursion / stack

Cost: Θ(|V| + |E|)

Dijkstra
Shortest path (non-negative weights)

Cost depends on data structure

🎓 Design Principles

✔ Templates for generic behavior
✔ Abstract base classes (pure virtual)
✔ Manual memory management
✔ Clear complexity documentation
✔ Aligned with academic material