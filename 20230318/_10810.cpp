#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m, a, b, c, tmp;
    cin >> n >> m;
    vector<int> arr(n, 0);
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> c;
        a--;
        b--;
        while (a <= b)
            arr[a++] = c;
    }
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << ' ' ;
    
}