#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, sum = 0, c_idx, c;
    vector<int> p_arr(4001, 0);
    vector<int> n_arr(4001, 0);
    vector<int> chvin;
    cin >> n;
    c_idx = ceil((double)n / 2);
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if(m < 0)
            n_arr[abs(m)]++;
        else
            p_arr[m]++;
    }
    int vin_idx = max(*max_element(n_arr.begin(), n_arr.end()), *max_element(p_arr.begin(), p_arr.end()));
    int n_cnt = 0, p_cnt = 0, flag = 1, n_max = 0, p_max = 0, n_min = 4000, p_min = 4000;
    for (int i = 0; i <= 4000; i++)
    {
        sum += (p_arr[i] * i) - (n_arr[i] * i);
        if(n_arr[i])
        {
            n_cnt++;
            if(n_max <= i)
                n_max = i;
            if(n_min >= i)
                n_min = i;
            if(n_arr[i] == vin_idx)
                chvin.push_back(i * -1);
        }
        if(p_arr[i])
        {
            p_cnt++;
            if(p_max <= i)
                p_max = i;
            if(p_min >= i)
                p_min = i;
            if(p_arr[i] == vin_idx)
                chvin.push_back(i);
        }
    }
    if(n_cnt)
    {
        c = 4001;
        while (c_idx > 0 && c--)
        {
            if(n_arr[c])
                c_idx -= n_arr[c];
        }
    }
    else
        p_max -= p_min;
    if(!p_cnt)
        n_max -= n_min;
    if(c_idx <= 0)
        flag = -1;
    else
    {
        c = -1;
        while (c_idx > 0 && c++ < 4000)
        if(p_arr[c])
            c_idx -= p_arr[c];
    }
    if(chvin.size() == 1)
        chvin.push_back(chvin[0]);
    sort(chvin.begin(), chvin.end());
    cout << floor(((double)sum / (double)n) + 0.5) << '\n' << c * flag << '\n';
    cout << chvin[1] << '\n' << n_max + p_max << '\n';
}