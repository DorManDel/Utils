#pragma once
/* ---------------------------------------------------------- */

namespace utils::ds
{

    template <typename T>
    struct BSTNode
    {
        T data;
        BSTNode *left = nullptr;
        BSTNode *right = nullptr;
    };

}
