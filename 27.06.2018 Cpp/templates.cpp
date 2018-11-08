#inlude "template.h"

int main(){
  Test<std::string> strTest("videoGrup");
  Test<int> iTest(3);

    strTest.print();
    iTest.print();
    return 0;
}
