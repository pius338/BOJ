#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, m, b, nb, max = 0, min = 256, mean, sum = 0;
    cin >> n >> m >> b;
    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> nb;
            sum += nb;
            arr[i].push_back(nb);
            if(nb >= max) 
                max = nb;
            if(nb <= min)
                min = nb;
        }
    }
    // mean = floor((sum / (m * n)) + 0.5);
    mean = ceil((max - min) / 2);
    cout << "max: " << max << '\n';
    cout << "mean: " << mean << '\n';
    sum = 0;
    // for (int i = 0; i < n; i++)
    //     for (int j = 0; j < m; j++)
    //         sum += pow(arr[i][j] - mean, 2);
    // int v = sum / (m * n);
    // cout << "v: " << sqrt(v) << '\n';
    int m_r, result;
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
            cout << "plus: " << plus << " minus: " << minus  << " max: " << max <<'\n';
            result = plus + (abs(minus) * 2);
            m_r = max;
            break;
        }
        max--;
    }
    cout << result << ' ' << m_r;
}