#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m, a, b, tmp;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        arr[i] = i + 1;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        a--;
        b--;
        tmp = arr[a];
        arr[a] = arr[b];
        arr[b] = tmp; 
    }
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << ' ' ;
    
}