#include<iostream>
using namespace std;

int main(){
    int n, result;
    cin >> n;
    n %= 8;
    result = (!n || n > 5) ? (10 - n) % 8 : n;
    cout << result;
}