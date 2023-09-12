#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, m, o;
    cin >> n >> m >> o;
    m = (m / 2) + o;
    cout << min(n, m);
}