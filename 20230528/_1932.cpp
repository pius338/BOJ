#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n;
	vector<vector<int>> arr(n + 1, vector<int>(n, 0));
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cin >> m;
			if(j == 0)
				arr[i][j] = arr[i - 1][j] + m;
			else if(j == i - 1)
				arr[i][j] = arr[i - 1][j - 1] + m;
			else
				arr[i][j] = max(arr[i - 1][j] + m, arr[i - 1][j - 1] + m);
		}
	}
	cout << *max_element(arr[n].begin(), arr[n].end());
}