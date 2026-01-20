
/* ---------------------------------------------------------- */
/*      _UTILS.HPP_     */
/* ---------------------------------------------------------- */
#pragma once

/* ---------------------------------------------------------- */

// ===== Algorithms =====
// utils/algo/algo_graph:
#include "algo/graph_algo/bfs.hpp"
#include "algo/graph_algo/dfs.hpp"
#include "algo/graph_algo/dijkstra.hpp"
//-----------------------
// utils/algo:
#include "algo/math.hpp"
#include "algo/search.hpp"
#include "algo/sort.hpp"

/* ---------------------------------------------------------- */

// ===== Data Structures =====
#include "ds/linked_list.hpp"
#include "ds/stack.hpp"
#include "ds/queue.hpp"
#include "ds/bst.hpp"
#include "ds/avl.hpp"
#include "ds/heap.hpp"

/* ---------------------------------------------------------- */

// Graph Data Structures
#include "ds/graph_ds/graph.hpp"
#include "ds/graph_ds/adj_list.hpp"
#include "ds/graph_ds/adj_matrix.hpp"

/* ---------------------------------------------------------- */

// ===== Core Utilities =====
#include "core/complexity.hpp"
#include "core/timer.hpp"
#include "core/debug.hpp"

/* ---------------------------------------------------------- */

// https://github.com/DorManDel/Utils
// use: #include "utils.hpp"

// git submodule add https://github.com/DorManDel/utils external/utils
// #include "external/utils/utils.hpp"

// sudo cp -r utils /usr/local/include/utils
// #include <utils/utils.hpp>

// /mnt/d/Programming/Scripts/Dor/Utils

/*
Add Utils as SubModule:
cd /mnt/<drive letter(c/d...)>/<Path of your Project/Files>
git submodule add https://github.com/DorManDel/Utils.git Utils
git commit -m "Add Utils as submodule"

// Update Utils in the Project that uses it:
cd Utils
git pull origin main
cd ..
git add Utils
git commit -m "Update Utils submodule"
*/