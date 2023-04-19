#include <bits/stdc++.h>
using namespace std;

int n, m, k;

int dfs(int row, int col, vector<vector<int>> &map, vector<vector<int>> &isChecked)
{
	if(isChecked[row][col])
		return 0;
	isChecked[row][col] = 1;
	int dc[4] = {0, 1, 0, -1}, dr[4] = {-1, 0, 1, 0};
	for (int i = 0; i < 4; i++)
	{
		int nc = col + dc[i], nr = row + dr[i];
		if (nr >= 0 && nc >= 0 && nr < n && nc < m)
			if(map[nr][nc] == 1 && !isChecked[nr][nc])
				dfs(nr, nc, map, isChecked);
	}
	return 1;
}

int main()
{
	int tcn;
	cin >> tcn;
	for (int t = 0; t < tcn; t++)
	{
		int cnt = 0;
		cin >> m >> n >> k;
		vector<pair<int, int>> arr(k);
		vector<vector<int>> map(n, vector<int>(m, 0));
		vector<vector<int>> isChecked(n, vector<int>(m, 0));
		for (int i = 0; i < k; i++)
			cin >> arr[i].first >> arr[i].second;
		for (int j = 0; j < arr.size(); j++)
			map[arr[j].second][arr[j].first] = 1;
		for (int row = 0; row < n; row++)
			for (int col = 0; col < m; col++)
				if(map[row][col] && !isChecked[row][col])
					if(dfs(row, col, map, isChecked))
						cnt++;
		cout << cnt << '\n';
	}
}