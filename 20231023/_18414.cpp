#include <iostream>
using namespace std;

int main(){
    int x, l, r;
    cin >> x >> l >> r;
    cout << ((x < r && x > l) ? x : (x >= r) ? r : l);
}