#include<iostream>
using namespace std;

int main(){
    int n, a, b, l;
    cin >> n >> a >> b >> l;
    a /= l; b /= l;
    cout << min(n, a * b);
}