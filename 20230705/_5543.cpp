#include <iostream>
using namespace std;

int main()
{
    int n, min_0 = 2000, m, min_1 = 2000;
    for (int i = 0; i < 3; i++)
    {
        cin >> n;
        if (n < min_0)
            min_0 = n;
    }
    for (int i = 0; i < 2; i++)
    {
        cin >> m;
        if (m < min_1)
            min_1 = m;
    }
    cout << min_0 + min_1 - 50;
}