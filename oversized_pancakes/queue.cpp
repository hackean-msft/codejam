#include <exception>
#include "Queue.h"
#include <iostream>

template <class T>
void Queue<T>::enqueue(T item)
{
    this->items.addLast(item);
}

template <class T> 
bool Queue<T>::isEmpty()
{
    return this->items.getSize() == 0;
}

template <class T>
T Queue<T>::deque()
{
    if (!isEmpty())
    {  
        T value = this->items.get(0);
        this->items.removeFirst();
        return value;
    }
    else
    {
        throw std::out_of_range("Empty list");
    }
}