// #include <iostream>
// #include <vector>
// #include "surface.cpp"
#include <string>
#include "LinkedList.cpp"

int main()
{
    // Surface surface("+++++++", 3);
    // Queue<string> queue;
    // std::cout << surface.isGoal() << std::endl;
    // std::vector<string> surfaces;
    // std::vector<string>::iterator it;

    // surfaces = surface.getNextSurfaces();
    // for (it = surfaces.begin(); it < surfaces.end(); it++)
    // {
    //     std::cout << *it << std::endl;
    // }

    LinkedList<std::string> linkedList;

    linkedList.addLast("wale");
    linkedList.addLast("Timi");
    linkedList.addLast("Banjo");
    linkedList.addLast("Adewale");

    std::cout << linkedList.get(0) << std::endl;
    std::cout << linkedList.get(1) << std::endl;
    std::cout << linkedList.get(2) << std::endl;
    std::cout << linkedList.get(3) << std::endl;

    linkedList.traverse();

    return 0;
}