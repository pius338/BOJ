#include <iostream>
using namespace std;

int main(){
    int n, one = 0, two = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> n;
        if(n == 1)
            one++;
        else
            two++;
    }
    if(one > two)
        cout << 1;
    else
        cout << 2;
}