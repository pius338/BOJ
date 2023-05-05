#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, k, minTm = 1000000, pathCnt;
	cin >> n >> k;
	queue<pair<int, int>> que;
	vector<int> isVisit(100001, 100000);
	que.push({n, 0});
	if(n >= k)
	{
		minTm = n - k;
		pathCnt = 1;
	}
	else
	{
		while (!que.empty())
		{
			int curPos = que.front().first;
			int curTm = que.front().second;
			que.pop();
			if (curPos < 0 || curPos > 100000 || curTm > minTm)
				continue;
			if (isVisit[curPos] >= curTm)
				isVisit[curPos] = curTm;
			else
				continue;
			if (curPos == k)
			{
				if (curTm < minTm)
				{
					minTm = curTm;
					pathCnt = 1;
				}
				else if (curTm == minTm)
					pathCnt++;
			}  
			else if(curTm < minTm)
			{
				if (curPos < k)
				{
					que.push({curPos + 1, curTm + 1});
					que.push({curPos * 2, curTm + 1});
				}
				que.push({curPos - 1, curTm + 1});
			}
		}
	}
	cout << minTm << '\n' << pathCnt;
}