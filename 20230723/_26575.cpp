#include<iostream>
using namespace std;

int main(){
    int n;
    double d, f, p;
    cin >> n;
    cout << fixed;
    cout.precision(2);
    for (int i = 0; i < n; i++)
    {
        cin >> d >> f >> p;
        cout << "$" << d * f * p << "\n";
    }
}