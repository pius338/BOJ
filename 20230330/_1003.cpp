#include <bits/stdc++.h>
using namespace std;

int zero, one;

int fibonacci(int n) {
    if (n == 0) {
        zero++;
        return 0;
    } else if (n == 1) {
        one++;
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        zero = 0;
        one = 0;
        cin >> m;
        fibonacci(m);
        cout << zero << ' ' << one << '\n';
    }
}