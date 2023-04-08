#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, a_n;
    char c;
    cin >> n;
    unordered_map<int, char> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        mp[i + 1] = c;
    }
    cin >> a >> a_n;
    int s;
    vector<int> w_cnt(a, 0);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a_n; j++)
        {
            cin >> s;
            auto it = mp.find(s);
            if(it != mp.end())
                if(it->second == 'W')
                    w_cnt[i]++;
        }
    }
    int flag = 0;
    vector<int> k_cnt(a, 0);
    for (int i = 0; i < a; i++)
        if(w_cnt[i] == a_n)
            k_cnt[i]++;
    for (int i = 0; i < a; i++)
        if(k_cnt[i])
            flag++;  
    if(flag)
        cout << "W";
    else
        cout << "P";
}