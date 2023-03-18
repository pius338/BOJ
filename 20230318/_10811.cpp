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
        int j = 0;
        while (a + j < b - j)
        {
            tmp = arr[a + j];
            arr[a + j] = arr[b - j];
            arr[b - j] = tmp;
            j++;
        }
    }
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << ' ' ;
    
}