#include <iostream>

int add(int a,int b){
  return a+b;
}
double add(double a,double b){
  return a+b;
}
int main(){
//  int a;
  auto result  = add(3,4);
  auto resultd = add(4.2,5.5);
  std::cout << result << " - " << resultd << std::endl;
  return 0;
}
