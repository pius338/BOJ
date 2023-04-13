#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;
    vector<string> arr(n + 1);
    vector<vector<int>> isVisit(n + 1, vector<int>(m + 1, 0));
    vector<vector<int>> cntArr(n + 1, vector<int>(m + 1));
    for (int i = 0; i < m + 1; i++)
        arr[0].push_back('2');
    for (int i = 1; i < n + 1; i++)
    {
        cin >> arr[i];
        arr[i].insert(arr[i].begin(), '2');
    }
    int x = 1, y = 1;
    int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, -1, 0, 1};
    queue<pair<int, int>> que;
    que.push({x, y});
    cntArr[1][1] = 1;
    while (!que.empty())
    {
        pair<int, int> cur = que.front();
        que.pop();
        for (int i = 0; i < 4; i++)
        {
            int newX = cur.first + dx[i], newY = cur.second + dy[i];
            if (newX >= 1 && newY >= 1 && newX <= n && newY <= m && arr[newX][newY] == '1' && isVisit[newX][newY] == 0)
            {
                isVisit[newX][newY] = 1;
                cntArr[newX][newY] = cntArr[cur.first][cur.second] + 1;
                que.push({newX, newY});
            }
        }
    }
    cout << cntArr[n][m];
}