#include <iostream>

class Complex{
public:
  Complex(): real(0),img(0){
    std::cout << "Base Constructor!" << std::endl;
  }
  Complex(double Real, double Img): real(Real),img(Img){
    std::cout << "Constructor with parameter!" << std::endl;
  }
  ~Complex(){
    std::cout << "Base Destructor!" << std::endl;
  }
  double getReal()const {
    return real;
  }
  double getImg()const {
    return img;
  }

  Complex(const Complex & complex){
    std::cout << "Copy Constructor" << std::endl;
    this->real = complex.real;
    this->img = complex.img;
  }

  const Complex &operator=(const Complex & complex){
    this->real = complex.real;
    this->img  = complex.img;
  }

  const Complex &operator+(const Complex & complex){
    this->real = this->real + complex.real;
    this->img  = this->img  + complex.img;
    return *this;
  }

  friend std::ostream &operator<<(std::ostream &out,const Complex & complex){
    std::cout << complex.getReal() << "+" << complex.getImg() << "i";
    return out;
  }
private:
  double real;
  double img;
};
