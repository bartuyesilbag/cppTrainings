#include <iostream>

class Int{
public:
  Int(){
    std::cout << "default const." << std::endl;
    pInt = new int(0);
  }
  Int(int value){
    std::cout << "param. const." << std::endl;
    pInt = new int(value);
  }
  Int(const Int &other){
    std::cout << "copy const." << std::endl;
    pInt = new int(*other.pInt);
  }
  Int & operator =(const Int & other){
    if(this != &other){
      std::cout << "= operator" << std::endl;
      delete pInt;
      pInt = new int(*other.pInt);
    }
    return *this;
  }
  ~Int(){
    std::cout << "destructor" << std::endl;
    delete pInt;
  }
  Int operator +(const Int & value){
    Int temp;
    *temp.pInt = *pInt + *value.pInt;
    return temp;
  }
  int getValue()const {
    return *pInt;
  }
  void setValue(int value){
    *pInt = value;
  }
private:
  int * pInt;

};