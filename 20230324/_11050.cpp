#include <iostream>
using namespace std;

int r_fac(int n)
{
    if(!n)
        return 1;
    return (n * r_fac(n - 1));
}
int main()
{
    int n, k;
    cin >> n >> k;
	cout << r_fac(n) / (r_fac(n - k) * r_fac(k));
}
