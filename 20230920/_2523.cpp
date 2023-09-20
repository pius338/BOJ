#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < i; k++)
            cout << '*';
        cout << '\n';
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int k = 0; k < i; k++)
            cout << '*';
        cout << '\n';
    }
}