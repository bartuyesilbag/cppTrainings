#include <iostream>
#include <algorithm>
#include <vector>
int perm(std::vector<int> &A){
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

int solution(int X, std::vector<int> &a){
  auto it = std::find(a.begin(), a.end(), X);
  if (it != a.end()){
    auto index = std::distance(a.begin(), it);
    return 45;
  }
  else
    return -1;
}

int main(){
  std::vector<int> v{1,3,1,4,3,5,2,4};
  int ret = solution(5,v);
  std::cout << ret << std::endl;
  return 0;
}