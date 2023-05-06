#include <iostream>
using namespace std;

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, m, tmp = 0, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		if(tmp <= m)
			cnt++;
		tmp = m;
	}
	cout << cnt;
}