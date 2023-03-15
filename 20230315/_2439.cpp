#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int j = 0;
        while(j++ < n - i - 1)
            cout << ' ';
        while(j++ < n + 1)
            cout << '*';
        cout << '\n';
    }  
}