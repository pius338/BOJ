#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n >= 5)
    {
        n -= 5;
        cout << "V";
    }
    while(n > 0)
    {
        n--;
        cout << "I";
    }
}