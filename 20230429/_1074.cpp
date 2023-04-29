#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int cnt = 0;

void r_z(int n, int r, int c)
{
	if(n == 0)
		return;
	n /= 2;
	if(r < n && c < n)
		r_z(n, r, c);
	else if(r < n && c >= n)
	{
		cnt += n * n;
		r_z(n, r, c - n);
	}
	else if(r >= n && c < n)
	{
		cnt += n * n * 2;
		r_z(n, r - n, c);		
	}
	else if(r >= n && c >= n)
	{
		cnt += n * n * 3;
		r_z(n, r - n, c - n);
	}
}

int main()
{
	int n, r, c;
	cin >> n >> r >> c;
	n = pow(2, n);
	r_z(n, r, c);
	cout << cnt;
}