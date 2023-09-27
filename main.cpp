#include <iostream>
#include "ForwardList.h"

int main() {
    ForwardList<int> list;
    std::cout << list.empty() << std::endl;
    std::cout << "Front: " << list.front() << std::endl;
    /*list.pushFront(3);
    list.pushFront(5);
    list.pushFront(7);
    std::cout << list.empty() << std::endl;
    std::cout << "Front: " << list.front() << std::endl;
    list.popFront();
    std::cout << "Front after pop: " << list.front() << std::endl;*/

    return 0;
}