#include<iostream>
#include<vector>
using namespace std;

int main(){
    int dx, dy;
    vector<int> x(3), y(3);
    for (int i = 0; i < 3; i++)
        cin >> x[i] >> y[i];
    dx = (x[0] == x[1]) ? x[2] : (x[1] == x[2]) ? x[0] : x[1];
    dy = (y[0] == y[1]) ? y[2] : (y[1] == y[2]) ? y[0] : y[1];
    cout << dx << ' ' << dy;
}