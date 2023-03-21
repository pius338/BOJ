#include <iostream>
#include <string>
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
    int n, m, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if(isprime(m))
            cnt++;
    }
    cout << cnt;
}