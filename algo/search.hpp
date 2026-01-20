#pragma once

/* ---------------------------------------------------------- */
#include <vector>
/* ---------------------------------------------------------- */

namespace utils::algo
{

    /* ============================================================
     * SEARCH SUMMARY
     * ------------------------------------------------------------
     * Algorithm     | Time     | Requires Sorted | Notes
     * ------------------------------------------------------------
     * Linear Search | O(n)     | No              | Simple
     * Binary Search | O(log n) | Yes             | Fast
     * ------------------------------------------------------------
     */

    template <typename T>
    int binarySearch(const std::vector<T> &v, const T &key)
    {
        int left = 0, right = (int)v.size() - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (v[mid] == key)
                return mid;
            if (v[mid] < key)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return -1;
    }

}
