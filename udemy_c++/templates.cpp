#include <iostream>
#include <typeinfo>

template<typename T>
T max(T x, T y){
	std::cout << typeid(T).name() << std::endl;
	return x > y ? x : y;
}

int main(){
	max("a","b");
	//std::cout << max(3,2) << std::endl;
	return 0;
}