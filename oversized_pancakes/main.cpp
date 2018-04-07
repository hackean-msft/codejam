#include <iostream>
#include <vector>
#include "surface.cpp"
#include "queue.cpp"
#include "linked_list.cpp"

int main()
{
    Surface surface("+++++++", 3);
    Queue<string> queue;
    std::cout << surface.isGoal() << std::endl;
    std::vector<string> surfaces;
    std::vector<string>::iterator it;

    surfaces = surface.getNextSurfaces();
    for (it = surfaces.begin(); it < surfaces.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    LinkedList<string> linkedList;

    linkedList.add("wale");

    return 0;
}