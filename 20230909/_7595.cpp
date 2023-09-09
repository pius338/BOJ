#include<iostream>
using namespace std;

int main(){
    int n;
    while (1)
    {
        cin >> n;
        if(n == 0)
            break;
        for (int i = 0; i < n; i++)
        {
            for (int j = n - i - 1; j < n; j++)
                cout << '*';
            cout << '\n';
        }
    }
}