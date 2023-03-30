#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, result;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    long long left = 0, right = *max_element(arr.begin(), arr.end());
    while(left <= right)
    {
        long long total = 0;
        long long mid = (left + right)/ 2;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] >= mid)
                total += arr[i] - mid;
        }
        if(total >= m)
        {   
            result = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    cout << result;
}