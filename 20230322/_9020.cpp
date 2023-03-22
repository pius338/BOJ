#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int	isprime(int nb)
{
	long long	n;

	if (nb < 2)
		return (0);
	if (nb < 4)
		return (1);
	if (nb % 2 == 0)
		return (0);
	n = 3;
	while (n * n <= nb)
	{
		if (nb % n == 0)
			return (0);
		n += 2;
	}
	return (1);
}

int main()
{
    int n, m;
    cin >> n;
    vector<pair<int, int>> arr(n);
	for (int i = 0; i < n; i++)
    {
        cin >> m;
        for (int j = 2; j * 2 <= m; j++)
            if(isprime(j) && isprime(m - j))
            {
                arr[i].first = j;
                arr[i].second = m - j;
            }            
    }
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i].first << ' ' << arr[i].second << '\n';
}