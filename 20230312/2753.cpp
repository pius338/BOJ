#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if((!(n % 4) && (n % 100)) || !(n % 400))
        cout << 1 << '\n';
    else    
        cout << 0 << '\n';
}