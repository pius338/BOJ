#include <iostream>
using namespace std;

int main() {
	int n, m, a = 0, result = -1;
	cin >> n;
	m = n;
	while(n > 0 && m)
	{
		m = n;
		m %= 5;
		if(m % 3)
		{
			n -= 3;
			a++;
		}
		else
			result = n / 5 + m / 3 + a;
		m %= 3;
	}
	cout << result;
} 