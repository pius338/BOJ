#include<iostream>
using namespace std;

int main(){
    int l, a, b, c, d, i = 0;
    cin >> l >> a >> b >> c >> d;
    while(a > 0 || b > 0)
    {
        a -= c;
        b -= d;
        i++;
    }
    cout << l - i;
}