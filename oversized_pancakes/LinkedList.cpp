#include <iostream>
#include <exception>
#include <sstream>
#include "LinkedList.h"

using namespace std;

template <class T>
Node<T>::Node(T element)
{
    this->element = element;
}

template <class T>
T Node<T>::getElement()
{
    return this->element;
}

template <class T>
void Node<T>::setNext(std::shared_ptr<Node<T> > next)
{
    this->next = next;
}

template<class T>
void Node<T>::setPrevious(std::shared_ptr<Node<T> > prev)
{
    this->previous = prev;
}

template<class T>
std::shared_ptr<Node<T> > Node<T>::getNext()
{
    return this->next;
}

template<class T>
std::shared_ptr<Node<T> > Node<T>::getPrevious()
{
    return this->previous;
}



/** 
 * 
 * Linked List implementation
 * 
 * 
 * */

template <class U>
LinkedList<U>::LinkedList()
{
    this->size = 0;
}

template <class U>
void LinkedList<U>::addLast(U element)
{
    if (this->first == nullptr)
    {
        this->first = make_shared<Node<U> >(element);
        this->last = this->first;
    }
    else
    {
        std::shared_ptr<Node<U> > currentNodePtr = make_shared<Node<U> >(element);
        
        this->last->setNext(currentNodePtr);
        currentNodePtr->setPrevious(this->last);
        
        this->last = currentNodePtr;
    }
    this->increaseSize();
}

template <class U>
void LinkedList<U>::addFirst(U element)
{
    if (this->first == nullptr)
    {
        this->first = make_shared<Node<U> >(element);
        this->last = this->first;
    }
    else 
    {
        shared_ptr<Node<U> > currentNodePtr = make_shared<Node<U> >(element);
        currentNodePtr->setNext(this->first);
        this->first->setPrevious(currentNodePtr);

        this->first = currentNodePtr;
    }
    this->increaseSize();

}

template <class U>
void LinkedList<U>::removeFirst()
{
    if (this->getSize() == 0)
    {
        throw std::length_error("Can't remove element from an empty linked list");
    } 
    else if (this->getSize() == 1)
    {
        this->first = this->last = nullptr;
    }
    else 
    {
        shared_ptr<Node<U> > nextNodePtr = this->first->getNext();
        nextNodePtr->setPrevious(nullptr);
        this->first = nextNodePtr;
    }
    this->decreaseSize();
}

template<class U>
void LinkedList<U>::removeLast()
{
    if (this->getSize() == 0)
    {
        throw std::length_error("Can't remove element from an empty linked list");
    }
    else if (this->getSize() == 1)
    {
        this->first = this->last = nullptr;
    }
    else
    {
        shared_ptr<Node<U> > prevNodePtr = this->last->getPrevious();
        prevNodePtr->setNext(nullptr);
        this->last = prevNodePtr;
    }
    this->decreaseSize();

    
}

template <class U>
void LinkedList<U>::increaseSize()
{
    this->size++;
}

template <class U>
void LinkedList<U>::decreaseSize()
{
    this->size--;
}


template<class U>
int LinkedList<U>::getSize()
{
    return this->size;
}

template <class U>
void LinkedList<U>::traverse()
{
    std::shared_ptr<Node<U> > current = this->first;
    while(current != nullptr)
    {
        std::cout << current->getElement() << std::endl;
        current = current->getNext();
    }
}

template <class U>
U LinkedList<U>::get(int index)
{
    if (index < 0 || index > this->getSize())
    {
        throw std::range_error("Cannot access index at " + std::to_string(index));
    } else
    {
        int i = 0;
        std::shared_ptr<Node<U> > current = this->first;
        while ( i < index)
        {
            i++;
            current = current->getNext();
        }
        return current->getElement();
    }
    
}
