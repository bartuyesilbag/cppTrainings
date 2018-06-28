#include <iostream>


class baseClass{
public:
  virtual bool operator()() = 0;
  virtual ~baseClass(){};
};

class childA : public baseClass{
public:
  virtual bool operator()(){
    std::cout << "i am childA" << std::endl;
    return true;
  }
};


class childB : public baseClass{
public:
  virtual bool operator()(){
    std::cout << "i am childB" << std::endl;
    return true;
  }
};
