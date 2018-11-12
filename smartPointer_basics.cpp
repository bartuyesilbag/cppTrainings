#include <iostream>
#include "Int.h"

class IntPtr{
  Int *p;
public:
  IntPtr(Int *obj) : p(obj){
    
  }
  ~IntPtr(){
    delete p;
  }
  Int * operator ->(){
    return p;
  }
  Int & operator *(){
    return *p;
  }
};

void CreateInt(){
  IntPtr p = new Int;
  (*p).setValue(6);
  std::cout << p->getValue() << std::endl;
}

int main(){
  CreateInt();
  return 0;
}