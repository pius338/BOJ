#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string str0, str1;
	cin >> str0 >> str1;
	if(str0.size() >= str1.size())
		cout << "go";
	else
		cout << "no";
}