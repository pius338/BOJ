#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, mx = 0;;
    string str;
    cin >> n >> m;
    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        for (int j = 0; j < str.size(); j++)
            arr[i].push_back(str[j] - '0');
    }
    for (int i = 1; i < n; i++)
        for (int j = 1; j < m; j++)
            if(arr[i][j] && arr[i - 1][j] && arr[i][j - 1] && arr[i - 1][j - 1])
                arr[i][j] += min({arr[i - 1][j], arr[i][j - 1], arr[i - 1][j - 1]});
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if(arr[i][j] > mx)
                mx = arr[i][j];    
    cout << mx * mx; 
}