#include <iostream>
#include <algorithm>
#include <vector>

int solution(std::vector<int> &A){
  std::sort(A.begin(),A.end());
  
  if(A.at(A.size()-1) != (unsigned)A.size())
    return 0;
  for(int i = 0 ; i< A.size(); i++){
    if(i+1 != A.at(i)){
      return 0;
    }
  }
  return 1;
}

int main(){
  std::vector<int> v{9, 5, 7, 3, 2, 7, 3, 1, 10, 8};
  int ret = solution(v);
  std::cout << ret << std::endl;
  return 0;
}