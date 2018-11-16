#include <iostream>

class Int{
public:
  Int(){
    std::cout << "default const." << std::endl;
    pInt = 5;
  }
  Int(int value): pInt{value}{
    std::cout << "param const." << std::endl;
  }
  Int(const Int &other){
    std::cout << "copy const." << std::endl;
    pInt = other.pInt; //deep copy
  }
  Int & operator= ( const Int &other ){
    std::cout << "assigment const." << std::endl;
      pInt = other.pInt;
  }
  int getValue() const {
    return pInt;
  }
  void setValue(int value){
    pInt = value;
  }
private:
int  pInt;
};


int main(){
  Int i(8);
  Int j = i;
  std::cout << "---------" << std::endl;
  Int t;
  t = i;
  return 0;
}
