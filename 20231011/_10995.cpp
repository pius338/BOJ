#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str = (i % 2) ? " *" : "* ";
        for (int j = 0; j < n; j++)
            cout << str;
        cout << "\n";
    }
}