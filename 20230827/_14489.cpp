#include<iostream>
using namespace std;

int main(){
    int n, m, o;
    cin >> n >> m >> o;
    if(n + m >= o * 2)
        cout << n + m - (o * 2);
    else
        cout << n + m;
}