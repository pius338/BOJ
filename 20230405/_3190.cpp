#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l;
    cin >> n;
    vector<vector<int>>(n, vector<int>(n, 0));
    vector<pair<int, int>> l_arr;
    cin >> k;
    vector<pair<int, int>> k_arr(k);
    for (int i = 0; i < k; i++)
    {
        cin >> k_arr[i].first >> k_arr[i].second;
        k_arr.push_back({});
    }
    
}