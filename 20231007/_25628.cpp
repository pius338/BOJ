#include <iostream>
using namespace std;

int main(){
    int n, m, r;
    cin >> n >> m;
    r = (n / 2 > m) ? m : n / 2;
    cout << r;
}