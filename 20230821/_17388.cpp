#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a + b + c >= 100)
        cout << "OK";
    else
    {
        if(b > a && c > a)
            cout << "Soongsil";
        if(a > b && c > b)
            cout << "Korea";
        if(a > c && b > c)
            cout << "Hanyang";
    }
}