#include "utils.hpp"

/*
HEAD
 ↓
[10] ⇄ [20] ⇄ [30]
                  ↑
                 TAIL

*/

int main()
{
    linked_list<int> list;

    list.push_back(10);
    list.push_back(20);
    list.push_front(5);

    list.nodeToDelete(20);

    return 0;
}
