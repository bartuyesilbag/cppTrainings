#include <iostream>
#include <memory>
#include "Int.h"

void doSomething(std::unique_ptr<Int> ptr){
  //ptr->setValue(5);
  std::cout << ptr->getValue() << std::endl;
}

void doSomething(std::shared_ptr<Int> ptr){
  //ptr->setValue(5);
  std::cout << ptr->getValue() << std::endl;
}

void CreateInt(){
  std::unique_ptr<Int> pUnq(new Int);
  //unique_ptr is movable but not copyable.
  
  std::shared_ptr<Int> pShr(new Int);
  //shared_ptr is copyable
  
  (*pUnq).setValue(5);
  pShr->setValue(10);
  doSomething(std::move(pUnq));
  std::cout << "-------------------------" << std::endl;
  doSomething(pShr);
  //auto p2 = p; //not allowed because unique_ptr is deleted func( unique_ptr(const & unique_ptr) = delete)
  std::cout << pShr->getValue() << std::endl;
}
int main(){
  CreateInt();
  return 0;
}