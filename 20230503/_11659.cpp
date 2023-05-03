#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		int nbr;
		cin >> nbr;
		if(i > 0)
			arr[i] = arr[i - 1] + nbr;
		else
			arr[i] = nbr;
	}
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		a--; b--;
		int result = (a != b) ? ((a != 0) ? arr[b] - arr[a - 1] : arr[b] - 0) : arr[b] - arr[b - 1];
		cout << result << '\n';
	}
}