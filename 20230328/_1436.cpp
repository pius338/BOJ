#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    string str;
    cin >> n;
    vector<int> arr;
    for (int i = 665; i < 2147483647; i++)
    {
        if(cnt == n)
        {
            cout << i - 1;
            break;
        }
        str = to_string(i);
        if(str.find("666") != string::npos)
            cnt++;
    }
}