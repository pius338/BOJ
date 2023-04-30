#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	int n, m, h;
	cin >> n >> m >> h;
	vector<vector<vector<int>>> arr(h, vector<vector<int>> (m, vector<int> (n)));
	queue<pair<pair<int, int>, int>> que;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < m; j++)
		{
			for (int k = 0; k < n; k++)
			{
				cin >> arr[i][j][k];
				if(arr[i][j][k] == 1)
					que.push({{j, k}, i});
			}
		}
	}
	int cnt = 0, dx[6] = {1, 0, -1, 0, 0, 0}, dy[6] = {0, 1, 0, -1, 0, 0}, dz[6] = {0, 0, 0, 0, 1, -1};
	while (!que.empty())
	{
		int size = que.size();
		for (int i = 0; i < size; i++)
		{
			int curr = que.front().first.first, curc = que.front().first.second, curh = que.front().second;
			que.pop();
			for (int j = 0; j < 6; j++)
			{
				int nexr = curr + dy[j], nexc = curc + dx[j], nexh = curh + dz[j];
				if(nexr >= 0 && nexr < m && nexc >= 0 && nexc < n && nexh >= 0 && nexh < h && !arr[nexh][nexr][nexc])
				{
					arr[nexh][nexr][nexc] = 1;
					que.push({{nexr, nexc}, nexh});
				}
			}
		}
		cnt++;
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < m; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if(!arr[i][j][k])
				{
					cout << -1;
					return 0;
				}
			}
		}
	}
	cout << cnt - 1;
}