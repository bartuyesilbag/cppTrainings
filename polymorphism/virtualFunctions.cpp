#include <iostream>
#include <vector>
#include <cstring>
/* Compile with : g++ -std=c++ virtualFunctions.cpp -o example.out */
using namespace std;

class user{
public:
  virtual const char* getStatus() = 0;
};

class Student : public user{
public:
virtual const char* getDegree() = 0;
  const char* getStatus(){
    return "i'm student!";
  }
};

class Professor : public user{
public:
  const char* getStatus(){
    return "i'm professor!";
  }
};

class Master : public Student{
public:
  const char* getDegree(){
    return "i'm master Student!";
  }
};

class Undergraduate : public Student{
public:
  const char* getDegree(){
    return "i'm undergraduated!";
  }
};


int main(int argc, char const *argv[]) {

  vector<user*> v;

  Professor *p = new Professor();
  Master *m = new Master();
  Undergraduate *un = new Undergraduate();

  cout << p->getStatus()  << endl;
  cout << m->getStatus()  << " - " << m->getDegree() << endl;
  cout << un->getStatus() << " - " << un->getDegree() << endl;

  return 0;
}
