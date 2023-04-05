#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    stack<pair<int, int>> stc;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        while(!stc.empty() && arr[i] > stc.top().second)
            stc.pop();
        if(stc.empty())
            cout << 0 << ' ';
        else
            cout << stc.top().first << ' ';
        stc.push({i + 1, arr[i]});
    }
}