#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    string str;
    cin >> n >> m;
    unordered_map<string, int> mp(n);
    vector<string> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        mp[str];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> str;
        auto it = mp.find(str);
        if(it != mp.end())
            arr.push_back(it->first);
    }
    sort(arr.begin(), arr.end());
    cout << arr.size() << '\n';
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << '\n';
}