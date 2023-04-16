#include <iostream>
#include <unordered_map>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> mp;
    for (int i = 0; i < n; i++)
    {
        string url, psw;
        cin >> url >> psw;
        mp[url] = psw;
    }
    for (int i = 0; i < m; i++)
    {
        string str;
        cin >> str;
        cout << mp[str] <<'\n';
    }
}