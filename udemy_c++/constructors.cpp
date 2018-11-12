#include <iostream>

class Car{

private:
  float fuel;
  float speed;
  int passengers;
  static int tc;
public:
  Car(){
   tc++;
   std::cout << "construct!" << std::endl;
   fuel       = 0;
   speed      = 0;
   passengers = 0;
  }
  Car(float amount){
   tc++;
   std::cout << "param. const!" << std::endl;
   fuel       = amount;
   speed      = 0;
   passengers = 0;
  }
  ~Car(){
   tc--;
   std::cout << "destruct!" << std::endl;
  }
  void FillFuel(float amount){
    fuel = amount;
  }
  void Accelerate(){
    speed++;
    fuel -= 0.5;
  }
  void Brake(){
    speed = 0;
  }
  void AddPassengers(int passengers){
   this->passengers = passengers;
  }
  void Dashboard(){
    std::cout << "Fuel: " << fuel << " Speed: " << speed << " Passengers: " << passengers << std::endl;
  }

  static void ShowCount(){
   std::cout << tc << std::endl;
  }
};

int Car::tc = 0;
int main(){
  Car c(5); 
  //c.FillFuel(6);
  c.Accelerate();
  c.Accelerate();
  c.Accelerate();
  c.Dashboard();
  Car::ShowCount(); 
  return 0;
}
