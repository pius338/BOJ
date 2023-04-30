#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<vector<int>> arr(m, vector<int> (n));
	vector<vector<int>> isMark(m, vector<int> (n));
	queue<pair<int, int>> que;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
			if(arr[i][j] == 1)
				que.push({i, j});
		}
	}
	int cnt = 0, dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
	while (!que.empty())
	{
		int size = que.size();
		for (int i = 0; i < size; i++)
		{
			int curr = que.front().first, curc = que.front().second;
			que.pop();
			for (int j = 0; j < 4; j++)
			{
				int nexr = curr + dy[j], nexc = curc + dx[j];
				if(nexr >= 0 && nexr < m && nexc >= 0 && nexc < n && !arr[nexr][nexc])
				{
					arr[nexr][nexc] = 1;
					que.push({nexr, nexc});
				}
			}
		}
		cnt++;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(!arr[i][j])
			{
				cout << -1;
				return 0;
			}
		}
	}
	cout << cnt - 1;
}