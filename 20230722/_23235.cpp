#include<iostream>
using namespace std;

int main(){
    int n, m, idx = 1;
    while(1)
    {
        cin >> n;
        if(n == 0)
            break;
        for (int i = 0; i < n; i++)
            cin >> m;
        cout << "Case " << idx++ << ": Sorting... done!\n";
    }
}