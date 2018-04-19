

#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

#include <memory>

using namespace std;
/* Node implementation */
template <class T>
class Node
{
private:
    T element;
    shared_ptr<Node<T> > next;
    shared_ptr<Node<T> > previous;
    
public:
    Node(T element);
    T getElement();
    void setNext(std::shared_ptr<Node<T> > next);
    void setPrevious(std::shared_ptr<Node<T> > prev);
    shared_ptr<Node<T> > getNext();
    shared_ptr<Node<T> >getPrevious();
};


/*
    Linked List implementation
*/
template <class U>
class LinkedList
{
private:
    std::shared_ptr<Node<U> > first;
    std::shared_ptr<Node<U> > last;
    int size;

    void increaseSize();
    void decreaseSize();
    
public:
    LinkedList();
    void addLast(U element);
    void addFirst(U element);
    void removeFirst();
    void removeLast();
    int getSize();
    void traverse();
    U get(int index);
};

#endif