#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n, r = 1, result = 0, mod = 1234567891;
    string str;
    cin >> n >> str;
    for (int i = 0; i < n; i++)
    {
        result += ((str[i] - 96) * (r % mod)) % mod;
        r = (r * 31) % mod;
    }
    cout << result % mod;
}