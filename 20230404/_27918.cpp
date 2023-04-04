#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d = 0, p = 0;
    string str;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if(abs(d - p) == 2)
            break;
        if(arr[i] == "D")
            d++;
        else
            p++;
    }
    cout << d << ':' << p;
}