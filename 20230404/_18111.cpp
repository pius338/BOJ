#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nb, b;
    double n, m, max = 0, min = 500, sum = 0;
    cin >> n >> m >> b;
    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> nb;
            sum += (double)nb;
            arr[i].push_back(nb);
            if(nb >= max) 
                max = nb;
            if(nb <= min)
                min = nb;
        }
    }
    long long m_r = 0, result = INT_MAX;
    while(max >= min)
    {
        int plus = 0, minus = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(max - arr[i][j] >= 0)
                    plus += max - arr[i][j];
                else
                    minus += max - arr[i][j];
            }
        }
        if(plus + minus <= b)
        {
            if(result > plus + (abs(minus) * 2))
            {
                result = plus + (abs(minus) * 2);
                m_r = max;
            }   
        }
        max--;
    }
    cout << result << " " << m_r << '\n';
}