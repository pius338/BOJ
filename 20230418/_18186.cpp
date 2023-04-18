#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, b, c, result = 0, cnt = 0;
    cin >> n >> b >> c;
    vector<int> arr(n + 1);
    vector<int> cnt_arr;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cnt += arr[i];
    }
    arr[n] = 0;
    if(b <= c)
    {
        for (int i = 0; i < n; i++)
            result += arr[i] * b;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i + 1] > arr[i + 2] && arr[i])
            {
                long long diff = min(arr[i], arr[i + 1] - arr[i + 2]);
                result += diff * (b + c);
                arr[i] -= diff;
                arr[i + 1] -= diff;
                diff = *min_element(arr.begin() + i, arr.begin() + i + 3);
                result += diff * (b + (2 * c));
                arr[i] -= diff;
                arr[i + 1] -= diff;
                arr[i + 2] -= diff; 
            }
            else if(arr[i + 1] <= arr[i + 2] && arr[i])
            {
                long long diff = *min_element(arr.begin() + i, arr.begin() + i + 3);
                result += diff * (b + (2 * c));
                arr[i] -= diff;
                arr[i + 1] -= diff;
                arr[i + 2] -= diff; 
                diff = min(arr[i], arr[i + 1]);
                result += diff * (b + c);
                arr[i] -= diff;
                arr[i + 1] -= diff;
            }
            if(arr[i] > 0)
                result += arr[i] * b;
        }
    }
    cout << result;
}