// #include <iostream>
// #include <vector>
// #include "surface.cpp"
#include <string>
#include "Queue.cpp"

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

    Queue<std::string> queue;

    queue.enqueue("wale");
    queue.enqueue("Timi");
    queue.enqueue("Banjo");
    queue.enqueue("Adewale");

    std::cout << queue.deque() << std::endl;
    std::cout << queue.deque() << std::endl;
    std::cout << queue.deque() << std::endl;
    std::cout << queue.deque() << std::endl;

    queue.deque();

    return 0;
}