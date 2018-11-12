#include <iostream>
void print(int count, char ch){
  for(int i = 0; i < count ; i++){
    std::cout << ch;
  }
  std::cout << std::endl; 
}
int main(){
  print(5,'#');
  void(*pfn)(int,char) = print;
  (*pfn)(6,'#');
  pfn(7,'%');
  return 0;
}
