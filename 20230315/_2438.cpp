#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int j = 0;
        while(j++ < i + 1)
            cout << '*';
        cout << '\n';
    }  
}