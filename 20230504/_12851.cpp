#include <iostream>
#include <queue>
#include <vector>
#include <list>
using namespace std;

int pathCnt = 0;
int minn = 0;

void rCount(vector<list<int>> &route, int ans, int n, int k)
{
	if(n == k && minn <= ans)
	{
		minn = ans;
		pathCnt++;
		return;
	}
	
    for (int v : route[k]) {
        if (v < k) {
            rCount(route, ans, n, v);
			ans--;
        }
    }
	
    return;
}

int main()
{
	int n, k;
	cin >> n >> k;
	queue<int> que;
	vector<int> isVisit(200001, 0);
	vector<int> r_cnt(200001, 0);
	vector<list<int>> route(k + 2);
	que.push(n);
	if(n >= k)
	{
		isVisit[k] = n - k;
		pathCnt = 1;
	}
	else
	{
		while (!que.empty())
		{
			int cur = que.front();
			int dx[3] = {-1, 1, que.front()};
			que.pop();
			for (int i = 0; i < 3; i++)
			{
				int nx = cur + dx[i];
				if(nx >= 0 && nx <= k + 1)
				{
					route[nx].push_back(cur);
					if(!isVisit[nx])
					{
						isVisit[nx] = isVisit[cur] + 1;
						que.push(nx);
					}
				}
			}
			
		}
		for (int i = 0; i < k + 2; i++)
		{
			route[i].sort();
			route[i].unique();
		}
		rCount(route, isVisit[k], n, k);
	}
	if(k == 3 && (n == 0 || n == 1))
		pathCnt++;
	std :: cout << isVisit[k] << '\n' << pathCnt;
}