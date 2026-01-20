#pragma once

/* example of use:

utils::ds::stack<int> s(5);

s.push(10);
s.push(20);
s.push(30);

std::cout << s.pop();   // 30
std::cout << s.top();   // 20

*/

/* ============================================================================
 *  Stack (LIFO) - Generic Implementation
 * ----------------------------------------------------------------------------
 *  Type      : Data Structure
 *  Order     : LIFO (Last In, First Out)
 *  Backing   : Dynamic Array
 *
 *  Time Complexity:
 *    push    -> O(1)
 *    pop     -> O(1)
 *    top     -> O(1)
 *
 *  Space Complexity:
 *    O(n)
 *
 *  Notes:
 *  - No STL containers used
 *
 * ============================================================================
 */
/* ---------------------------------------------------------- */
#include <iostream>
#include <cassert>
/* ---------------------------------------------------------- */

namespace utils::ds
{
    template <typename T>
    class stack
    {
    private:
        T*  _data;      // dynamic array
        int _capacity;  // max size
        int _top;       // index of top element

    public:
        /* ---------------- Constructors / Destructor ---------------- */

        explicit stack(int capacity = 10);
        ~stack();

        /* ---------------- Core Operations ---------------- */

        void push(const T& value);
        T pop();
        T top() const;

        /* ---------------- State Queries ---------------- */

        bool isEmpty() const;
        bool isFull()  const;
        int  size()    const;

        /* ---------------- Debug ---------------- */

        void print() const;
    };

    /* ===================================================================== */
    /*                          IMPLEMENTATION                               */
    /* ===================================================================== */

    template <typename T>
    stack<T>::stack(int capacity)
        : _capacity(capacity), _top(-1)
    {
        _data = new T[_capacity];
    }

    template <typename T>
    stack<T>::~stack()
    {
        delete[] _data;
    }

    template <typename T>
    void stack<T>::push(const T& value)
    {
        assert(!isFull());
        _data[++_top] = value;
    }

    template <typename T>
    T stack<T>::pop()
    {
        assert(!isEmpty());
        return _data[_top--];
    }

    template <typename T>
    T stack<T>::top() const
    {
        assert(!isEmpty());
        return _data[_top];
    }

    template <typename T>
    bool stack<T>::isEmpty() const
    {
        return _top == -1;
    }

    template <typename T>
    bool stack<T>::isFull() const
    {
        return _top == _capacity - 1;
    }

    template <typename T>
    int stack<T>::size() const
    {
        return _top + 1;
    }

    template <typename T>
    void stack<T>::print() const
    {
        std::cout << "[ ";
        for (int i = 0; i <= _top; ++i)
            std::cout << _data[i] << " ";
        std::cout << "]\n";
    }
}
