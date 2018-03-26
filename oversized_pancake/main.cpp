#include <iostream>
#include <vector>
#include "surface.cpp"
#include "queue.cpp"

int main()
{
    Queue<int> myQueue;

    while (!myQueue.isEmpty())
    {
        std::cout << myQueue.deque() << std::endl;
    }
    // std::cout << myQueue.deque();
    // Surface surface("++++--+-", 3);
    // std::vector<string> surfaces;
    // std::vector<string>::iterator it;

    // surfaces = surface.getNextSurfaces();
    // for (it = surfaces.begin(); it < surfaces.end(); it++)
    // {
    //     std::cout << *it << std::endl;
    // }
    // return 0;
}