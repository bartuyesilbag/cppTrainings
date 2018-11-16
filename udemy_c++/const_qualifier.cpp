#include <iostream>

//g++ -o const_qualifier const_qualifier.cpp

using namespace std;
int main(){
  float rad = 0;
  cout << "Enter a rad value: ";
  cin >> rad;
  const float pi = 3.14f;
  pi = 5;
  float area = pi * rad * rad;
  cout << "Area is: " << area << endl;
  
  return 0;
}