#include <iostream>
using namespace std;

int main(){
    float a, b;
    cin >> a >> b;
    cout.precision(1);
    cout << fixed << (a * b) / 2;
}