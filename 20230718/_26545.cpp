#include <iostream>
using namespace std;

int main(){
    int n, m, total = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        total += m;
    }
    cout << total;
}