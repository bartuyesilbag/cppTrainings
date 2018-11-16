#include <iostream>
using namespace std;

class Singleton{
    static Singleton* m_instance;
    int m_value = 0;
  public:

    static Singleton* getInstance(){
      if(!m_instance)
        m_instance = new Singleton();
      return m_instance;
    }

    int getValue(){
      return m_value;
    }

    void setValue(int value){
      m_value = value;
    }

};
Singleton *Singleton::m_instance = 0;

int main(int argc, char const *argv[]) {
  Singleton* s1 = Singleton::getInstance();
  Singleton* s2 = Singleton::getInstance();
  cout << "s1Value : " << s1->getValue() << " s2Value : " << s2->getValue() << endl;
  s1->setValue(5);
  cout << "s1Value : " << s1->getValue() << " s2Value : " << s2->getValue() << endl;

  return 0;
}
