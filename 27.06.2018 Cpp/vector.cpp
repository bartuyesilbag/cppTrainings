#include <iostream>
#include <vector>

int main(){
  std::vector<int> numbers;
  std::vector<int>::iterator it;

  for(int i = 0; i < 5; i++){
    numbers.push_back(i);
  }

  for(it=numbers.begin() ; it!=numbers.end(); it++){
    std::cout << *it << &(*it) << std::endl;
  }
}
