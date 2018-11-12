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
  
  friend std::ostream & operator <<(std::ostream & out, const Int & obj);
private:
  int * pInt;

};

Int operator+(int first, const Int &obj){
  Int temp;
  temp.setValue(first + obj.getValue());
  return temp;
}

std::ostream & operator <<(std::ostream & out, const Int & obj){
  out << *obj.pInt;
  return out;
}
int main(){
  Int i;
    std::cout << "----------" << std::endl;
  Int j(8);
    std::cout << "----------" << std::endl;
  Int k(j);
    std::cout << "----------" << std::endl;
  j = j;
  
  Int sum = j+5;
  sum = 5 + sum;
  std::cout << "sum : " << sum << std::endl;
  return 0;
}