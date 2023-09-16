#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    int n, m, sNode, u, v, c;
    cin >> n >> m >> sNode;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pQue;
    vector<pair<int, int>> edge[20001];
    vector<int> isFound(n + 1, 0);
    vector<int> dist(n + 1, INT32_MAX);
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v >> c;
        edge[u].push_back({v, c});
    }
    isFound[sNode] = 1;
    dist[sNode] = 0;
    pQue.push({0, sNode});

    while(!pQue.empty())
    {
        int curDist = pQue.top().first;
        int curNode = pQue.top().second;
        pQue.pop();
        for (int i = 0; i < edge[curNode].size(); i++)
        {
            int nNode = edge[curNode][i].first;
            int nDist = edge[curNode][i].second;
            if(curDist + nDist < dist[nNode])
            {
                dist[nNode] = curDist + nDist;
                pQue.push({dist[nNode], nNode});
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if(dist[i] == INT32_MAX)
            cout << "INF" << '\n';
        else
            cout << dist[i] << '\n'; 
    }
}