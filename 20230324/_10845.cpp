#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n, m;
    string str;
    queue<int> que;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if(str == "push")
        {
            cin >> m;
            que.push(m);
        }
        else if(str == "pop")
        {
            if(que.empty())
                cout << -1 << '\n';
            else
            {
                cout << que.front() << '\n';
                que.pop();
            }
        }
        else if(str == "size")
            cout << que.size() << '\n';
        else if(str == "empty")
            cout << que.empty() << '\n';
        else if(str == "front")
        {
            if(que.empty())
                cout << -1 << '\n';
            else
                cout << que.front() << '\n';
        }
        else if(str == "back")
        {
            if(que.empty())
                cout << -1 << '\n';
            else
                cout << que.back() << '\n';
        }
    }
}
