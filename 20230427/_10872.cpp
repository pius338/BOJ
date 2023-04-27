#include <iostream>
using namespace std;

int r_f(int n)
{
	if(n == 0)
		return 1;
	return (n * r_f(n - 1));
}

int main()
{
	int n;
	cin >> n;
	cout << r_f(n);;
}