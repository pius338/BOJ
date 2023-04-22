#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int m = ((n % 10) * 10) + (((n / 10) + (n % 10)) % 10);
	int cnt = 1;
	while (n != m)
	{
		m = ((m % 10) * 10) + (((m / 10) + (m % 10)) % 10);
		cnt++;
	}
	cout << cnt;
}