#include <iostream> 
#include <cstring>

using namespace std;

int main()
{
	
	cout << "helloWorld" << endl;	
	string str;
	/*cin >> str;
	cout << "Input : " << str << endl;*/
	std::getline(cin,str);
	cout << "Input : " << str << std::endl;
}
