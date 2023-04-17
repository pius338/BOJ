#include <iostream>
using namespace std;

int main()
{
    double a, b, x, m = 100.0;
    cin >> a >> b >> x;
    if(a == b)
        cout << fixed << a;
    else
    {
        double av = (a > b) ? x / a : (m - x) / a;
        double bv = (a < b) ? x / b : (m - x) / b;
        double result = m / (av + bv);
        cout << fixed << result;
    }
}