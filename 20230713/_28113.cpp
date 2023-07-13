#include <iostream>
using namespace std;

int main() 
{
	int n, a, b;
	cin >> n >> a >> b;
	if(n > b)
		b = n;
	if(b > a)
		cout << "Bus";
	else if(b == a)
		cout << "Anything";
	else
		cout << "Subway";
}