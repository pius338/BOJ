#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    unordered_map<int, int> mp;
    int n, m, k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if(!mp.count(m))
            mp[m] = 1;
        else
            mp[m]++;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if(mp.count(m))
            cout << mp[m] << ' ';
        else
            cout << 0 << ' ';
    }
}