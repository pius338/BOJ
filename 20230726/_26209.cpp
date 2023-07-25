#include<iostream>
using namespace std;

int main(){
    int n;
    for (int i = 0; i < 7; i++)
    {
        cin >> n;
        if(n != 0 && n != 1)
        {
            cout << "F";
            return 0;
        }
    }
    cout << "S";
}