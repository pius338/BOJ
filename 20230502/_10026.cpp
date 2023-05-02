#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n;

int dfs(char c, int row, int col, vector<string> &map, vector<vector<int>> &isVisit)
{
	if(isVisit[row][col])
		return 0;
	isVisit[row][col] = 1;
	int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
	for (int i = 0; i < 4; i++)
	{
		int nextr = row + dy[i], nextc = col + dx[i];
		if(nextr >= 0 && nextc >= 0 && nextr < n && nextc < n)
			if(!isVisit[nextr][nextc] && map[nextr][nextc] == c)
				dfs(c, nextr, nextc, map, isVisit);
	}
	return 1;
}

int main()
{
	int cnt = 0;
	cin >> n;
	vector<string> map(n);
	vector<vector<int>> isVisit(n, vector<int> (n, 0));
	for (int i = 0; i < n; i++)
		cin >> map[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!isVisit[i][j])
				if(dfs(map[i][j], i, j, map, isVisit))
					cnt++;
			if (map[i][j] == 'R')
				map[i][j] = 'G';
		}
	}
	cout << cnt << ' ';
	cnt = 0;
	vector<vector<int>> isSVisit(n, vector<int> (n, 0));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (!isSVisit[i][j])
				if(dfs(map[i][j], i, j, map, isSVisit))
					cnt++;
	cout << cnt;
}