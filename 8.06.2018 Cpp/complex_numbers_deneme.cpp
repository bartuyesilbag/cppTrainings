#include <iostream>
#include "complex_numbers_deneme.h"

int main()
{
  Complex c1;
  Complex c2(3,4);
  Complex c3(5,6);
  Complex c4 = c2;
  std::cout << c1.getReal() << " " << c1.getImg() << std::endl;
  std::cout << c4.getReal() << " " << c4.getImg() << std::endl;
  std::cout << c4 << std::endl;
  return 0;
}
