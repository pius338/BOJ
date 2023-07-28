#include<iostream>
using namespace std;

int main(){
    int n, d[5] = {6, 3, 2, 1, 2};
    for (int i = 0; i < 2; i++)
    {
        int t = 0;
        for (int j = 0; j < 5; j++)
        {
            cin >> n;
            t += d[j] * n;
        }
        cout << t <<" ";
    }
}