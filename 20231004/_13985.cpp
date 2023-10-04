#include <iostream>
using namespace std;

int main(){
    int n, m, k;
    char c;
    cin >> n >> c >> m >> c >> k;
    if(n + m == k)
        cout << "YES";
    else
        cout << "NO";
}