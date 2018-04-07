#include <memory>

template <class T>
class Node
{
private:
    T element;
    std::shared_ptr<Node<T> > next;
    std::shared_ptr<Node<T> > previous;
    
public:
    Node(T element);
    T getElement();
    void setNext(std::shared_ptr<Node<T> > next);
    void setPrevious(std::shared_ptr<Node<T> > prev);
    std::shared_ptr<Node<T> > getNext();
    std::shared_ptr<Node<T> >getPrevious();
};

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




/*
    Linked List implementation
*/
template <class U>
class LinkedList
{
private:
    std::shared_ptr<Node<U> > first;
    std::shared_ptr<Node<U> > last;
    
public:
    void addLast(U element);
    void addFirst(U element);
    void removeFirst(U element);
    void removeLast(U element);
    void traverse();
};

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
        std::shared_ptr<Node<U> > currentNodePtr = make_shared<Node<U> >(element);
        currentNodePtr->setNext(this->first);
        this->first->setPrevious(currentNodePtr);

        this->first = currentNodePtr;
    }

}

template <class U>
void LinkedList<U>::traverse()
{
    std::shared_ptr<Node<U> > current = this->first;
    while(current != nullptr)
    {
        Node<U> node = *current;
        std::cout << node.getElement() << std::endl;
        current = node.getNext();
    }
}

