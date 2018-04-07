//
//  main.cpp
//  codejam
//
//  Created by hackean on 3/31/18.
//  Copyright © 2018 hackean. All rights reserved.
//
#include <iostream>
#include <vector>
#include <string>
#include "oversized_pancake/surface.cpp"
#include "oversized_pancake/queue.cpp"
#include "oversized_pancake/linked_list.cpp"

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
    
    linkedList.addFirst("wale");
    linkedList.addFirst("Timi");
    linkedList.addFirst("Akin");
    linkedList.addFirst("Leyin");
    linkedList.addFirst("Alagbe");
    linkedList.addFirst("Gbenga");

    std::cout << std::endl << std::endl << std::endl;
    linkedList.traverse();

    linkedList.removeFirst();
    std::cout << std::endl << std::endl << std::endl;
    linkedList.traverse();

    linkedList.removeLast();
    std::cout << std::endl << std::endl << std::endl;
    linkedList.traverse();
    
    return 0;
}
