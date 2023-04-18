#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, result = 0;
    cin >> n;
    vector<int> arr(n + 1);
    vector<int> cnt_arr;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    arr[n] = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i + 1] > arr[i + 2] && arr[i])
        {
            int diff = min(arr[i], arr[i + 1] - arr[i + 2]);
            result += diff * 5;
            arr[i] -= diff;
            arr[i + 1] -= diff;
            diff = *min_element(arr.begin() + i, arr.begin() + i + 3);
            result += diff * 7;
            arr[i] -= diff;
            arr[i + 1] -= diff;
            arr[i + 2] -= diff; 
        }
        else if(arr[i + 1] <= arr[i + 2] && arr[i])
        {
            int diff = *min_element(arr.begin() + i, arr.begin() + i + 3);
            result += diff * 7;
            arr[i] -= diff;
            arr[i + 1] -= diff;
            arr[i + 2] -= diff; 
            diff = min(arr[i], arr[i + 1]);
            result += diff * 5;
            arr[i] -= diff;
            arr[i + 1] -= diff;
        }
        if(arr[i] > 0)
            result += arr[i] * 3;
    }
    cout << result;
}