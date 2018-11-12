#include <iostream>

void print(int * ptr) {
  std::cout <<  *ptr <<  std::endl;
  *ptr = 100;
}
int main(){
  const int CHUNK_SIZE = 512;
  const int *ptr = &CHUNK_SIZE;
  //*ptr = 1;
  int x = 10;
  //ptr = &x;
  //*ptr = 1;
  print(&x);
  std::cout <<  "main->x " <<  x <<  std::endl;
  return 0;
}