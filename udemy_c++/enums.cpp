#include <iostream>

enum class COLORS{
  white,
  black,
  red,
  green,
  blue
};
enum class LIGHTS{
  red,
  yellow,
  green
};
void setColor(COLORS c){
  if(c == COLORS::white)
    std::cout << "white" << std::endl;
  else if(c == COLORS::black)
    std::cout << "black" << std::endl;
  else
    std::cout << "other color" << std::endl;
}
int main(){
  setColor(COLORS::white);
  setColor(static_cast<COLORS>(3));
  return 0;
}

