#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n % 4)
    {
        cout << fixed;
        cout.precision(2);
        cout << (double)n / 4;
    }
    else
        cout << n / 4 << ".0";
}