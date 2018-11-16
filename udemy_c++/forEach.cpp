#include <iostream>

int main(){
  
  int arr[] = {1,2,3,4,5,6};
  /*
  for (int i = 0; i < 6; i++){
    std::cout << arr[i] << std::endl;
  }
  */

  for(const auto i : arr){
    std::cout << i << std::endl;
  }
  return 0;
}
