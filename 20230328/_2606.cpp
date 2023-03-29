#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, cnt = 0;
    cin >> n >> p;
    vector<bool> b_arr(n + 1, false);
    vector<pair<int, int>> arr(p);
    vector<vector<int>> link(n + 1);
    for (int i = 0; i < p; i++)
        cin >> arr[i].first >> arr[i].second;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            if (arr[j].first == i)
                link[i].push_back(arr[j].second);
            if (arr[j].second == i)
                link[i].push_back(arr[j].first);
        }
    }
    b_arr[1] = true;
    for (int k = 0; k < n; k++)
    {    
        for (int i = 1; i <= n; i++)
            if(b_arr[i])
                for (int j = 0; j < link[i].size(); j++)
                    b_arr[link[i][j]] = true;
    }
    for (int i = 0; i < b_arr.size(); i++)
        if(b_arr[i])
            cnt++;
    cout << cnt - 1;
}