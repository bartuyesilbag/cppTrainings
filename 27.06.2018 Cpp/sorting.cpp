#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Test{
  int m_iId;
  string m_strName;

public:
  Test(int id,string name) : m_iId(id), m_strName(name) {}

  void print(){
    cout << m_iId << " : " << m_strName << endl;
  }

  bool operator<(const Test& other) const{
    return m_strName < other.m_strName;
  }

  friend bool compare(const Test &a, const Test &b);
};

bool compare(const Test &a, const Test &b){
  return a.m_strName > b.m_strName;
}

int main(){
  vector<Test> v;

    v.push_back(Test(1001,"Selim"));
    v.push_back(Test(1002,"Metin"));
    v.push_back(Test(1984,"Bartu"));

    sort(v.begin(), v.end(),compare);

    for(vector<Test>::iterator it= v.begin(); it!=v.end(); it++){
      it->print();
    }
}
