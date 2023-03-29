#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, v, m;
    int result;
    cin >> a >> b >> v;
    m = ceil((v - a) / (a - b));
    result = ((v - a) < (a - b)) ? 1 : (int)m;
    if(v == a)
        result = 0;
    cout << result + 1;
}