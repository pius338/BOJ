#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    int n, m, nbr;
    string str;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    unordered_map<int, string> mp_key;
    unordered_map<string, int> mp_name;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        mp_key[i + 1] = str;
        mp_name[str] = i + 1;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> str;
        if(isdigit(str[0]))
        {
            nbr = stoi(str);    
            cout << mp_key[nbr] << '\n';
        }
        else
        {
            auto it = mp_name.find(str);
            cout << it->second << '\n';
        }
    }
}