/*
push_back	הוספה לסוף	Θ(1)
push_front	הוספה להתחלה	Θ(1)
pop_back	מחיקה מהסוף	Θ(1)
pop_front	מחיקה מההתחלה	Θ(1)
size()	מספר איברים	Θ(1)
empty()	האם ריקה	Θ(1)
clear()	מחיקת כל הרשימה	Θ(n)

*/

/*
HEAD
 ↓
[10] ⇄ [20] ⇄ [30]
                  ↑
                 TAIL

*/
#pragma once

#include <iostream>

namespace utils::ds
{
    template <typename T>
    struct Node
    {
        T info;
        Node *next;
        Node *prev;
        Node(T key) : info(key), next(nullptr), prev(nullptr) {}
    };

    template <typename T>
    class linked_list
    {
    private:
        Node<T> *_head;
        Node<T> *_tail;
        int _size;

        void _destroyList();

    public:
        linked_list();
        linked_list(const T value);
        ~linked_list() { _destroyList(); };

        inline void push_back(const T value);
        inline void push_front(const T value);

        inline Node<T> *findNode(const T &value, bool isNearEnd = false) const;
        inline bool nodeToDelete(T value);
        inline void printList() const;
    };

    // Empty_LL_Init:
    template <typename T>
    inline linked_list<T>::linked_list()
    {
        _head = _tail = nullptr;
        _size = 0;
    }

    // LL Con for 1 Elem:
    template <typename T>
    inline linked_list<T>::linked_list(const T value)
    {
        _head = new Node<T>(value);
        _tail = _head;
        _size = 1;
    }

    template <typename T>
    inline void linked_list<T>::_destroyList()
    {
        Node<T> *curr = _head;
        while (curr)
        {
            curr = curr->next;

            // delete the prev elem:
            if (curr->prev)
                delete curr->prev;
            _size--;
        }
        _tail = _head = nullptr;
        _size = 0;
    }

    template <typename T>
    inline void linked_list<T>::push_back(const T value)
    {
        Node<T> *newNode = new Node<T>(value);

        _tail->next = newNode;
        newNode->prev = _tail;
        _tail = newNode;

        _size++;
    }

    template <typename T>
    inline void linked_list<T>::push_front(const T value)
    {
        Node<T> *newNode = new Node<T>(value);

        _head->prev = newNode;
        newNode->next = _head;
        _head = newNode;

        _size++;
    }

    /*
    --------------------------------------------------
    Function: findNode
    Purpose : Find node containing given value
    Input   : value (T)
    Output  : Node<T>* (nullptr if not found)
    Cost    : Θ(n)
    --------------------------------------------------
    */
    template <typename T>
    inline Node<T> *linked_list<T>::findNode(const T &value, bool isNearEnd) const
    {
        Node<T> *temp;
        // int counter = size;
        // int numberInList = 0;
        //  search from front / rear :
        if (isNearEnd)
        {
            temp = _tail;
            if (temp->info == value)
                return temp;

            while (temp && temp->info != value)
            {
                temp = temp->prev;
                // counter--;
                if (temp->info == value)
                    return temp;
            }
            // numberInList = counter;
            //  Print;
        }
        else
        {
            temp = _head;
            if (temp->info == value)
                return temp;
            while (temp && temp->info != value)
            {
                temp = temp->next;
                // counter--;
                if (temp->info == value)
                    return temp;
            }
        }
        return nullptr;
    }

    template <typename T>
    inline bool linked_list<T>::nodeToDelete(T value)
    {
        using namespace std;
        Node<T> *nodeToFind = findNode(value);
        if (!nodeToFind)
        {
            cout << "Node " << value << " not found!" << endl;
            return false;
        }
        if (!nodeToFind->prev)
        {
            // head:
            if (nodeToFind->next)
            {
                _head->next->prev = nullptr;
                _head = _head->next;
                nodeToFind->next = nullptr;
            }
        }
        else if (!nodeToFind->next)
        {
            if (nodeToFind->prev)
            {
                _tail->prev->next = nullptr;
                _tail = _tail->prev;
                nodeToFind->prev = nullptr;
            }
        }
        else
        {
            nodeToFind->next->prev = nodeToFind->prev;
            nodeToFind->prev->next = nodeToFind->next;
            nodeToFind->next = nodeToFind->prev = nullptr;
        }
        delete nodeToFind;
        nodeToFind = nullptr;
        return true;
    }
}