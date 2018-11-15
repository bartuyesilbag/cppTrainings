#include <iostream>
#include <limits>
#include <stdexcept>
#include <memory>

using namespace std;

class dummy{
public:
  dummy(){cout << "const." << endl;}
  ~dummy(){cout << "dest." << endl;}
};

void doSomething(int count){
  unique_ptr<dummy> d(new dummy);
  //dummy * d = new dummy();
  int *p = new int[count];
  if(count < 10)
    throw out_of_range("out of range!");
  delete p;
}

int main(){
  try{
  doSomething(numeric_limits<int>::max()*100000000000);
  }
  /*catch(std::runtime_error & ex){
    std::cout << ex.what() << std::endl;
  }
  catch(std::out_of_range & ex){
    std::cout << ex.what() << std::endl;
  }*/
  catch(exception &ex){
    cout << ex.what() << std::endl;
  }
  return 0;
}