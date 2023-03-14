#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	long long count, c_dist, dist, n;

	cin >> n;
	long long x[n], y[n];
	for (int i = 0; i < n; i++)
		cin >> x[i] >> y[i];
	for (int j = 0; j < n ; j++)
	{   
		int k = 0;
		c_dist = 0;
		count = 0;
		dist = y[j] - x[j];
		while(c_dist + k < dist)
		{
			k++;
			c_dist += k * 2;
			count += 2;
		}

		if (dist - c_dist > 0)
			count++;
		else if (dist - c_dist < 0 && abs(dist - c_dist) == abs(k))
			count--;
		cout << count << '\n';
	}
}