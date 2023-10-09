#include <iostream>
using namespace std;

int main(){
    int n, m, one = 0, zero = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if(m)
            one++;
        else
            zero++;
    }
    if(one < zero)
        cout << "Junhee is not cute!";
    else
        cout << "Junhee is cute!";
}