#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, l, t_w = 0;
    vector<vector<int>> arr(5);l;
    for (int i = 0; i < 6; i++)
    {
        cin >> m >> l;
        arr[m].push_back(l);
    }
    
    for (int i = 0; i < arr[1].size(); i++)
        t_w += arr[1][i];
    
    
    
}