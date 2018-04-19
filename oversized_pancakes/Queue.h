#ifndef _QUEUE_H
#define _QUEUE_H

#include "LinkedList.cpp"


template <class T>
class Queue
{
  private:
    LinkedList<T> items;

  public:
    void enqueue(T item);
    T deque();
    bool isEmpty();
};

#endif