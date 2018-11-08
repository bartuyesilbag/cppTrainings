#include <iostream>

class Complex{
  double real;
  double img;

public:
  Complex() : real(0.), img(0) {
    std::cout << "Basic Constructor" << std::endl;
  }
  Complex(double real, double img) : real(real), img(img) {
      std::cout << "Constructor with params." << std::endl;
  }
  ~Complex() {}
  double getReal() const {
    return real;
  }
  double getImg() const {
    return img;
  }
  //copy constructor:
  Complex(const Complex & other){
  std::cout << "Copy Constructor" << std::endl;
  real = other.real;
  img = other.img;

  }

  const Complex &operator=(const Complex &other){
    std::cout << "Assingment Overloading" << std::endl;
    this->real = other.real;
    (*this).img = other.img;
    return *this;
  }

  friend std::ostream & operator<<(std::ostream &out, const Complex &obj){
    std::cout << obj.real << " " << obj.img << "i";
    return out;
  }
};

Complex operator+(const Complex & c1, const Complex & c2){
  return Complex(c1.getReal() + c2.getReal(), c1.getImg() + c2.getImg());
}

int main()
{
  Complex c1;
  Complex c2(3,5);
  Complex c3;
  c3 = c2;
  Complex c4 = c2;
  std::cout << c1.getReal() << c1.getImg() << std::endl;
  std::cout << c2.getReal() << c2.getImg() << std::endl;
  std::cout << c3.getReal() << c3.getImg() << std::endl;
  std::cout << c2 << std::endl;
  std::cout << c2 + c3 << std::endl;
//cout stream.
  return 0;
}
