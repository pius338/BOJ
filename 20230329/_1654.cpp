#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, m, result;
    cin >> k >> n;
    vector<int> arr(k);
    vector<int> j_arr(k);
    for (int i = 0; i < k; i++)
        cin >> arr[i];
    long long left = 1, right = *max_element(arr.begin(), arr.end());
    while(left <= right)
    {
        int cnt = 0;
        long long mid = (left + right)/ 2;
        for (int i = 0; i < k; i++)
            cnt += arr[i] / mid;
        if(cnt >= n)
        {   
            result = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    cout << result;
}