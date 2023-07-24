#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    n -= 9;
    cout << n * 60 + m;
}