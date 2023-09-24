#include <iostream>
using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin >> n;
        if(!n)
            break;
        for (int i = n - 1; i >= 1; i--)
            n += i;
        cout << n << '\n';
    }
}