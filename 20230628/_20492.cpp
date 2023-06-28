#include <iostream>
using namespace std;

int main()
{
    int n, tax_0, tax_1;
    cin >> n;
    tax_0 = n * 0.22;
    tax_1 = (n * 0.2) * 0.22;
    cout << n - tax_0 << " " << n - tax_1;
}