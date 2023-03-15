#include <iostream>
using namespace std;

int main()
{
	int t, n;
	string str;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		cin >> n;
		cin >> str;
		for(int j = 0; j < str.size(); j++)
			for(int k = 0; k < n; k++)
				cout << str.at(j);
		cout << '\n';
	}  
}