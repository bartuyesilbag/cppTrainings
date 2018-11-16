#include <iostream>
#include <vector>
#include <algorithm>

void increase(int member,std::vector<int> *v){
  v->at(member-1)++;
}

std::vector<int> solution(int N,std::vector<int> &A){
  std::vector<int> temp(N,0);
  int max = 0;
  for(int i = 0; i < A.size(); i++){
    if(A.at(i) <= N){
      increase(A.at(i),&temp);
    }
    else{
      for(auto k : temp){
	if(k>max){
	  max = k;
	}
      }
      for(int i = 0; i < temp.size(); i++){
	temp.at(i) = max;
      }
    }
  }
  return temp;
}
int main(){
    int N = 5;
    std::vector<int> A{3,4,4,6,1,4,4};
    std::vector<int> res = solution(N,A);
    for(auto i : res){
      std::cout << i << std::endl;
    }
    return 0;
}