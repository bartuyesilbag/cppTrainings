#include <iostream>
namespace avg
{
  int calculate(int a,int b){
    return (a + b)/2;
  }
}

  int calculate(int a, int b){
    return a+b; 
  }
int main(){
  
  std::cout << avg::calculate(3,5) << " - " << calculate(3,5) << std::endl;
  return 0;
}
