#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j + 1 < n - i ; j++)
            cout << ' ';
        for (int k = 0; k < 2 * i + 1; k++)
            cout << '*';
        cout << '\n';
    }
    for (int i = n - 1; i > 0 ; i--)
    {
        for (int j = 0; j  < n - i; j++)
            cout << ' ';
        for (int k = 0; k + 1< 2 * i; k++)
            cout << '*';
        cout << '\n';
    }   
}