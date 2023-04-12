#include <iostream>
#include <list>
#include <vector>
#include <queue>
using namespace std;

void dfs(vector<list<int>> &graph, int start, vector<int> &isCheck)
{
    std::cout << start << " ";
    isCheck[start] = 1;
    for (int i : graph[start])
        if(!isCheck[i])
            dfs(graph, i, isCheck);  
}

void bfs(vector<list<int>> &graph, int start, vector<int> &isCheck)
{
    queue<int> que;
    isCheck[start] = 1;
    que.push(start);
    while (!que.empty())
    {
        int cur = que.front();
        cout << cur << ' ';
        que.pop(); 
        for (int i : graph[cur])
            if(!isCheck[i])
            {
                isCheck[i] = 1;
                que.push(i);
            }
    }
}

int main() 
{
    int n, m, v;
    cin >> n >> m >> v;
	vector<list<int>> graph(n + 1);
    vector<int> isCheck_dfs(n + 1, 0);
    vector<int> isCheck_bfs(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for (int i = 0; i < n + 1; i++)
        graph[i].sort();
    dfs(graph, v, isCheck_dfs);
    cout << '\n';
    bfs(graph, v, isCheck_bfs);
}