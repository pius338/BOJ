#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<bool> is_prime(1000001, true);

void	isprime(int n)
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
    int n, cnt;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    isprime(*max_element(arr.begin(), arr.end()));
    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        for (long long j = 0; j <= arr[i] / 2; j++)
            if(is_prime[j] && is_prime[arr[i] - j])
                cnt++;
        cout << cnt <<'\n';
    }
}