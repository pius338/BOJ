#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, tmp, cnt, mCnt = 0;
    cin >> n;
    vector<int> arr(n);
    vector<int> dp(n, 1);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if(arr[j] < arr[i])
                if(dp[j] + 1 > dp[i])
                    dp[i] = dp[j] + 1;
    cout << *max_element(dp.begin(), dp.end());
}