#include <bits/stdc++.h>
using namespace std;

vector<bool> is_prime(1000001, true);

void isprime(int n)
{
    is_prime[0] = false;
    is_prime[1] = false;
	for (long long i = 2; i * i <= n; i++)
    {
        if(is_prime[i])
            for(long long j = 2 * i; j <= n; j += i)
                is_prime[j] = false;
    }
    
}

int main()
{
    int m, n;
    cin >> m >> n;
    isprime(n);
    for (int i = m; i <= n; i++)
        if (is_prime[i])
            cout << i << '\n';
}