#pragma once

/* ---------------------------------------------------------- */
#include <vector>
#include <algorithm>
/* ---------------------------------------------------------- */
namespace utils::algo {

/* ============================================================
 * SORTING ALGORITHMS SUMMARY
 * ------------------------------------------------------------
 * Algorithm   | Time Avg | Worst | Memory | Stable | Use When
 * ------------------------------------------------------------
 * Bubble      | O(n²)    | O(n²) | O(1)   | Yes    | Teaching
 * Insertion   | O(n²)    | O(n²) | O(1)   | Yes    | Small n
 * Merge       | O(nlogn) | O(nlogn)| O(n) | Yes    | Stable sort
 * Quick       | O(nlogn) | O(n²) | O(logn)| No     | Fast in practice
 * Heap        | O(nlogn) | O(nlogn)| O(1) | No     | Memory safe
 * ------------------------------------------------------------
 */

/* ---------------- Bubble Sort ---------------- */
template<typename T>
void bubbleSort(std::vector<T>& v)
{
    for (size_t i = 0; i < v.size(); ++i)
        for (size_t j = 0; j + 1 < v.size() - i; ++j)
            if (v[j] > v[j + 1])
                std::swap(v[j], v[j + 1]);
}

/* ---------------- Insertion Sort ---------------- */
template<typename T>
void insertionSort(std::vector<T>& v)
{
    for (size_t i = 1; i < v.size(); ++i)
    {
        T key = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > key)
        {
            v[j + 1] = v[j];
            --j;
        }
        v[j + 1] = key;
    }
}

}
