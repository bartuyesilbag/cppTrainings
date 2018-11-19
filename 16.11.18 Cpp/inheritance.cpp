#include <iostream>

class Deneme
{
    int mAge;
    std::string mName;

  public:
    Deneme(int age, std::string name) : mAge{age}, mName(name)
    {
    }
};
int main(int argc, char const *argv[])
{
    Deneme d(5, "deneme");
    return 0;
}
