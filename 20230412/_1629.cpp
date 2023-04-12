#include <iostream>
using namespace std;

int main() 
{
    long long n, m, v, result = 1;
    cin >> n >> m >> v;
	while (m)
    {
        if(m % 2)
            result *= n % v;
        n = ((n % v) * (n % v)) % v;
        m /= 2;
    }
    cout << result;
}