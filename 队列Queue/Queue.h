#ifndef QUEUE_H_
#define QUEUE_H_

#include <list>

/*Code is from lecture slides*/
template <typename T>
class Queue {
 public:
  unsigned int Size();
  bool Isfull();
  void Max_size(const int &size);
  T& Front();
  T& Back();
  void Pop();
  void Push(const T &item);

 private:
  std::list<T> items;
  unsigned int max_size;
};

template <typename T>
unsigned int Queue<T>::Size() {
  return items.size();
}

template <typename T>
bool Queue<T>::Isfull() {
  if (items.size() == max_size) { 
    return true;
  }
  return false;
}

template <typename T>
void Queue<T>::Max_size(const int &size) {
  max_size = size;
}

template <typename T>
T& Queue<T>::Front() {
  if (!Size())
    throw std::underflow_error("Empty queue!");
  return items.front();
}

template <typename T>
T& Queue<T>::Back() {
  if (!Size())
    throw std::underflow_error("Empty queue!");
  return items.back();
}

template <typename T>
void Queue<T>::Pop() {
  if (!Size())
    throw std::underflow_error("Empty queue!");
  items.pop_front();
}

template <typename T>
void Queue<T>::Push(const T &item) {
  if (!Isfull()) {
    items.push_back(item);
  }
}

#endif // QUEUE_H_
