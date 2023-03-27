#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, k, n, result;
    cin >> m;
    vector<int> arr;
    for (int i = 0; i < m; i++)
    {
        cin >> k >> n;
        result = n;
        for (int j = n; j < n + k; j++)
            result += j;
        arr.push_back(result);
    }
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << '\n';
}