#include <iostream>

int Sum(int x, int y){
	return x + y;
}
int main(){
  auto i = 10;
  auto j = 5;
  auto sum = i + j;

  auto res = Sum(i,j);
  const int x = 10;
  const auto var = x;
  auto &var1 = x;
  auto ptr = &x;
  return 0;
}
