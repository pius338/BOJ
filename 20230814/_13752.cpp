#include<iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        for (int j = 0; j < m; j++)
            cout << "=";
        cout << "\n";
    }
}