#include <bits/stdc++.h>
using namespace std;

int r_cnt = 1;
int dp_cnt = 1;

int r_fib(int n)
{
    if(n <= 2)
        return 1;
    else
    {
        r_cnt++;
        return (r_fib(n - 2) + r_fib(n - 1));
    } 
}

int dp_fib(int n)
{
    
    vector<int> arr(41);
    if(n <= 2)
        arr[n] = 1;
    for (int i = 3; i < n; i++)
    {
        dp_cnt++;
        arr[n] = arr[n - 2] + arr[n - 1];
    }
    return (arr[n]);
}

int main()
{
    int n, m;
    cin >> n;
    r_fib(n);
    dp_fib(n);
    cout << r_cnt << ' ' << dp_cnt;
}