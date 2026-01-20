#pragma once
/* ---------------------------------------------------------- */

namespace utils::ds
{

    /* ============================================================
     * AVL TREE SUMMARY
     * ------------------------------------------------------------
     * Height: O(log n)
     * Rotations: LL, RR, LR, RL
     * Memory: Extra height field
     * Use when: Guaranteed performance required
     * ============================================================ */

    template <typename T>
    struct AVLNode
    {
        T data;
        AVLNode *left = nullptr;
        AVLNode *right = nullptr;
        int height = 1;
    };

    template <typename T>
    class AVLTree
    {
    private:
        AVLNode<T> *root = nullptr;

        /*
         * height(node)
         *
         * Purpose:
         * - Return height of a node
         *
         * Cost:
         * - Θ(1)
         */
        int height(AVLNode<T> *node) const;

        /*
         * balanceFactor(node)
         *
         * Purpose:
         * - Compute balance factor
         *
         * Cost:
         * - Θ(1)
         */
        int balanceFactor(AVLNode<T> *node) const;

    public:
        /*
         * insert(value)
         *
         * Purpose:
         * - Insert value while maintaining AVL balance
         *
         * Cost:
         * - Θ(log n)
         */
        void insert(const T &value);

        /*
         * search(value)
         *
         * Purpose:
         * - Check if value exists in tree
         *
         * Cost:
         * - Θ(log n)
         */
        bool search(const T &value) const;
    };

}

/*
 * ============================================================
 * AVL TREE OPERATIONS
 * ============================================================
 *
 * insert      : Θ(log n)
 * delete      : Θ(log n)
 * search      : Θ(log n)
 * height      : Θ(1)
 *
 * ============================================================
 */
