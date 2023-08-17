#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    if(n > 2)
        cout << "After";
    else if(n == 2)
    {
        if(m == 18)
            cout << "Special";
        else if(m > 18)
            cout << "After";
        else
            cout << "Before";
    }
    else
    {
        cout << "Before";
    }
}