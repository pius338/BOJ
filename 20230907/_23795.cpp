#include<iostream>
using namespace std;

int main(){
    int n, t = 0;
    while (1)
    {
        cin >> n;
        if(n == -1)
            break;
        t += n;
    }
    cout << t;
}