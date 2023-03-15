#include <iostream>
using namespace std;

int main()
{
	int nbr[3];
	int max = 0;
	int s_max = 0;
	int count = 0;

	cin >> nbr[0] >> nbr[1] >> nbr[2];
	
	
	if(nbr[0] == nbr[1])
	{
		count++;
		s_max = nbr[0];
	}
	if(nbr[0] == nbr[2])
	{
		count++;
		s_max = nbr[0];
	}
	if(nbr[1] == nbr[2])
	{
		count++;
		s_max = nbr[1];
	}
	for (int i = 0; i < 3; i++)
		if(nbr[i] > max)
			max = nbr[i];
	if(count == 0)
		cout << max * 100 << '\n';
	if(count == 1)
		cout << 1000 + s_max * 100 << '\n';	
	if(count >= 2)
		cout << 10000 + s_max * 1000 << '\n';

}