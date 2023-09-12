#include <iostream>
#include "ForwardList.h"

int main() {
    ForwardList<int> list;

    list.pushFront(3);
    list.pushFront(5);
    list.pushFront(7);

    std::cout << "Front: " << list.front() << std::endl;
    list.popFront();
    std::cout << "Front after pop: " << list.front() << std::endl;

    return 0;
}