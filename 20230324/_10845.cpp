#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n, m;
    string str;
    stack<int> stc;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if(str == "push")
        {
            cin >> m;
            stc.push(m);
        }
        else if(str == "pop")
        {
            if(stc.empty())
                cout << -1 << '\n';
            else
            {
                cout << stc.top() << '\n';
                stc.pop();
            }
        }
        else if(str == "size")
            cout << stc.size() << '\n';
        else if(str == "empty")
            cout << stc.empty() << '\n';
        else if(str == "top")
        {
            if(stc.empty())
                cout << -1 << '\n';
            else
                cout << stc.top();
        }
    }
}
