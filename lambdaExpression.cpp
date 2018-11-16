#include <iostream>
using namespace std;
template<typename T>
struct name
{
    T operator()(T x, T y)
    {
        return x + y;
    }
};

int main(int argc, char const *argv[])
{
    auto lambda = []() {
        cout << "hello world!" << endl;
    };
    lambda();

    auto sum = [](float x, float y)noexcept(false){
        return x + y;
    };

    cout << sum(5.4f, 7.7f) << endl;


    name<int> n;
    
    cout << n(5,4) << endl;
    return 0;
}
