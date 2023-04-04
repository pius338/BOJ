#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    vector<pair<int, int>> arr(41);
    for (int i = 0; i <= 40; i++)
    {
        if(i == 0)
            arr[i] = {1, 0};
        if(i == 1)
            arr[i] = {0, 1};
        if(i > 1)
        {
            arr[i].first = arr[i - 2].first + arr[i - 1].first;
            arr[i].second = arr[i - 2].second + arr[i - 1].second;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        cout << arr[m].first << ' ' <<arr[m].second << '\n'; 
    }
}