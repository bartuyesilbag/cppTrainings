#include <iostream>

inline int square(int x){
  return x*x;
}


#define SQUARE(x) x*x
int main(){
  int val  = 5;
  int res  = square(val + 1);
  int res2 = SQUARE(val + 1); 
  std::cout << res << " - " << res2 << std::endl;
  return 0;
}
