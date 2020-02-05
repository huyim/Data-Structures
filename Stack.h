#ifndef STACK_H_
#define STACK_H_

#include <vector>

/*Source of Code: lecture materials*/ 
template <typename T>
class Stack {
 public:
  unsigned int Size();
  T& Top();
  void Pop();
  void Push(const T &item);

  private:
   std::vector<T> items;
};

template <typename T>
unsigned int Stack<T>::Size() {
  return items.size();
}

template <typename T>
T& Stack<T>::Top(void) {
  if (!Size())
    throw std::underflow_error("Empty stack!");
  return items.back();
}

template <typename T>
void Stack<T>::Pop() {
  if (!Size())
    throw std::underflow_error("Empty stack!");
  items.pop_back();
}

template <typename T>
void Stack<T>::Push(const T &item) {
  items.push_back(item);
}

#endif  // STACK_H
