#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int n, m;
int safeMax = 0;
deque<pair<int, int>> dV;
vector<vector<int>> map(10, vector<int> (10));
vector<vector<int>> temp(10, vector<int> (10));

void virusInf(deque<pair<int, int>> _dV)
{
	int vc = 0, safeArea = 0;
	int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0 ,-1};
	vector<vector<int>> vTemp(10, vector<int> (10));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			vTemp[i][j] = temp[i][j];
	while(!_dV.empty())
	{
		int x = _dV.front().first, y = _dV.front().second;
		_dV.pop_front();
		for (int i = 0; i < 4; i++)
		{
			int curX = x + dx[i], curY = y + dy[i];
			if(curX >= 0 && curX < n && curY >= 0 && curY < m)
				if(vTemp[curX][curY] == 0)
				{
					vTemp[curX][curY] = 2;
					_dV.push_back({curX, curY});
				}
		}
	}
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if(vTemp[i][j] == 0)
				safeArea++;
	if(safeArea > safeMax)
		safeMax = safeArea;
	return;
}

void makeWall(int cnt)
{
	if(cnt == 3)
	{	
		virusInf(dV);
		return;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (temp[i][j] == 0)
			{
				temp[i][j] = 3;
				makeWall(cnt + 1);
				temp[i][j] = 0;
			}
		}
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 2)
				dV.push_back({i, j});
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if(map[i][j] == 0)
			{
				for (int k = 0; k < 10; k++)
					for (int l = 0; l < 10; l++)
						temp[k][l] = map[k][l];
				temp[i][j] = 3;
				makeWall(1);
				temp[i][j] = 0;
			}
		}
	}
	cout << safeMax;
}