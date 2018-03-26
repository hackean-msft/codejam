#include <vector>
#include <exception>

template <class T>
class Queue
{
  private:
    typename std::vector<T> items;
    typename std::vector<T>::iterator current;

  public:
    void enqueue(T item);
    T deque();
    bool isEmpty();
};

template <class T>
void Queue<T>::enqueue(T item)
{
    items.push_back(item);
    if (items.size() == 1)
    {
        this->current = items.begin();
    }
}

template <class T>
bool Queue<T>::isEmpty()
{
    return (this->current == items.end());
}

template <class T>
T Queue<T>::deque()
{
    if (!isEmpty())
    {
        T value = *this->current;
        this->current++;
        return value;
    }
    else
    {
        throw std::out_of_range("Empty list");
    }
}