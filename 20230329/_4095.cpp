#include <bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int n, m, mp, mx = 0;
        cin >> n >> m;
        if(n == 0)
            break ;
        vector<vector<int>> arr(n);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                cin >> mp;
                arr[i].push_back(mp);
            }
        for (int i = 1; i < n; i++)
            for (int j = 1; j < m; j++)
                if(arr[i][j] && arr[i - 1][j] && arr[i][j - 1] && arr[i - 1][j - 1])
                    arr[i][j] += min({arr[i - 1][j], arr[i][j - 1], arr[i - 1][j - 1]});
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if(arr[i][j] > mx)
                    mx = arr[i][j];    
        cout << mx << '\n';         
    }
}