#include <bits/stdc++.h>
using namespace std;

int n, nbr = 1;

int dfs(int row, int col, vector<string> &map, vector<vector<int>> &isChecked)
{
	if(isChecked[row][col])
		return 0;
	isChecked[row][col] = nbr;
	int dc[4] = {0, 1, 0, -1}, dr[4] = {-1, 0, 1, 0};
	for (int i = 0; i < 4; i++)
	{
		int nc = col + dc[i], nr = row + dr[i];
		if (nr >= 0 && nc >= 0 && nr < n && nc < n)
		{
			if(map[nr][nc] == '1' && !isChecked[nr][nc])
			{
				dfs(nr, nc, map, isChecked);
			}
		}
	}
	return 1;
}

int main()
{
	int cnt = 0;
	cin >> n;
	vector<string> map(n);
	vector<vector<int>> isChecked(n, vector<int>(n, 0));
	for (int i = 0; i < n; i++)
	{
		cin >> map[i];
	}
	
	for (int row = 0; row < n; row++)
		for (int col = 0; col < n; col++)
			if(map[row][col] == '1' && !isChecked[row][col])
				if(dfs(row, col, map, isChecked))
					nbr++;
	cout << nbr - 1 << '\n';
	vector<int> result(nbr, 0);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if(isChecked[i][j])
				result[isChecked[i][j]]++;
	sort(result.begin(), result.end());
	for (int i = 1; i < result.size(); i++)
		cout << result[i] << '\n';
}