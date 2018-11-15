#include <iostream>
#include <typeinfo>

template<typename T>
T max(T x, T y){
	return x > y ? x : y;
}

template<int size> 
void print(){
	std::cout << size << std::endl;
}

template<typename T, int size>
T sum(T (&arr)[size]){
	T s{};
	for(int i = 0; i<size; i++){
		s += arr[i];
	}
	return s;
}
int main(){
	//const char *b{"B"};
	//auto res = max(a,b);
	//const char *a{"A"};
	//print<3>();
	
	int arr[]{3,4,5,7};
	int s = sum(arr);
	std::cout << s << std::endl;
	return 0;
}