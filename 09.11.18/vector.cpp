#include <iostream>
#include <vector>

int main(){
  std::vector<int> v(4);

  std::cout << v.at(0) << v.at(1) << v.at(2) << v.at(3) << v.at(4) << std::endl;
  std::cout << v[0] << v[1] << v[2] << v[3] << v[4] << std::endl;

  return 0;
}


