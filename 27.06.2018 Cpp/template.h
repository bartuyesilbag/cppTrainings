#ifndef TEMPLATE_H
#define TEMPLATE_H
#include <iostream>

template<class T>
class Test{
  T obj;

public:
  Test(T obj){
    this->obj = obj;
  }

  void print(){
    std::cout << obj << std::endl;
  }
};

#endif
