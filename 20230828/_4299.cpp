#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    if((n + m) % 2 || m > n)
        cout << -1;
    else
        cout << (n + m) / 2 << " " << n - ((n + m) / 2);  
}