#include<iostream>
using namespace std;

int main(){
    int n, m, t = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        t += m;
    }
    t -= n - 1;
    cout << t;
}