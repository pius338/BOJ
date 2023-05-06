#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int n, k;
	bool isFound = false;
	cin >> n >> k;
	queue<int> que;
	vector<int> isVisit(200001, 0);
	que.push(n);
	if(n == k || 2 * n == k)
		isFound = true;	
	if(n > k)
	{
		isVisit[k] = n - k;
		isFound = true;
	}
	while (!que.empty() && !isFound)
	{
		int cur = que.front();
		int dx[3] = {que.front(), -1, 1};
		que.pop();
		for (int i = 0; i < 3; i++)
		{
			int nx = cur + dx[i];
			if(nx >= 0 && nx <= k + 1 && !isVisit[nx])
			{
				isVisit[nx] = isVisit[cur] + 1;
				if(i == 0)
					isVisit[nx]--;
				if(nx == k)
					isFound = true;
				que.push(nx);
			}
		}
	}
	cout << isVisit[k];
}