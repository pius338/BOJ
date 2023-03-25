#include <iostream>
using namespace std;

int main()
{
    int x, y, w, h, x_min, y_min, result;
    cin >> x >> y >> w >> h;
    x_min = (x < w - x) ? x : w - x;
    y_min = (y < h - y) ? y : h - y;
    result = (x_min <= y_min) ? x_min : y_min;
    cout << result;
}
