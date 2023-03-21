#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin >> n;
    queue<int> que;
    for (int i = 1; i <= n; i++)
        que.push(i);
    for (int i = 0; i < n - 1; i++)
    {
        que.pop();
        que.push(que.front());
        que.pop();
    }   
    cout << que.front();
}