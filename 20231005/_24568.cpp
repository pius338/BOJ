#include <iostream>
using namespace std;

int main(){
    int n, m, t = 0;
    cin >> n >> m;
    t += (n * 8) + (m * 3);
    cout << t - 28;
}