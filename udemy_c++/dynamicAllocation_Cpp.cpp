#include <iostream>
#include <string.h>

void newInt(int i){
  int *p = new int(i);
  std::cout << *p << std::endl;
  *p = 6;
  std::cout << *p << std::endl;
  delete p;
}

void newArray(int i){
  int *p = new int[i];
  for(int j = 0; j < i; ++j){
    p[j] = j;
  }
  delete []p;
}

void strings(){
  char * p = new char[4];
  strcpy(p,"C++");
  std::cout << p << std::endl;
  delete []p;
}

int main(){
  newInt(5);
  newArray(10);
  strings();
  return 0;
}
