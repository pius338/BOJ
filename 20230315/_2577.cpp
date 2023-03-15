#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b, c, result;
    vector<int> arr(10, 0);
    cin >> a >> b >> c;
    result = a * b * c;
    while(result / 10)
    {
        arr[result % 10]++;
        if(result / 10 < 10)
            arr[result / 10]++;
        result /= 10;
    }
    for (int i = 0; i < 10; i++)
        cout << arr[i] << '\n';
}