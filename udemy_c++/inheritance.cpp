#include <iostream>


class animal{
public:
  void eat(){
    std::cout << "eat" << std::endl;
  }
  void speak(){
    std::cout << "speak" << std::endl;
  }
  void run(){
    std::cout << "run" << std::endl;
  }
};

class dog : public animal{
public:
  void eat(){
    std::cout << "dog eat" << std::endl;
  }
};
int main(){
  
  dog d;
  d.eat();
  d.speak();
  d.run();
  return 0; 
}