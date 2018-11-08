#include <iostream>

class Int{
public:
  Int(){
    pInt = new int(0);
  }
  Int(int value){
    pInt = new int(value);
  }
  Int(const Int &i){
    pInt = new int(*i.pInt);
  }
  int getValue() const {
    return *pInt;
  }
  void setValue(int value){
    *pInt = value;
  }
private:
int * pInt;
};


int main(){
  Int i(5);
  //std::cout << i.getValue() << std::endl;
  i.setValue(12);
  //std::cout << i.getValue() << std::endl;
  Int j(i);
  std::cout << j.getValue() << std::endl;
  return 0;
}
