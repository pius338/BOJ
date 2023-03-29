#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, f, n, flag;
    cin >> m;
    vector<int> r_arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> f >> n;
        flag = 0;
        vector<vector<int>> arr(n + 1);
        for (int o = 0; o < arr.size(); o++)
        {
            arr[0].push_back(o);
            arr[1].push_back(0);
        }
        for (int j = 0; j < f; j++)
        {
            for (int k = 1; k <= n; k++)
                arr[1 - flag][k] = arr[1 - flag][k - 1] + arr[flag][k];
            flag = 1 - flag;
        }
        r_arr[i] = arr[f % 2][n];
    }
    for (int i = 0; i < r_arr.size(); i++)
        cout << r_arr[i] << '\n';
}