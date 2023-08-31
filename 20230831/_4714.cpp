#include<iostream>
using namespace std;

int main(){
    double n;
    cout << fixed;
    cout.precision(2);
    while (1)
    {
        cin >> n;
        if(n < 0)
            break;
        cout << "Objects weighing " << n << " on Earth will weigh " << n * 0.167 << " on the moon.\n";
    }
}