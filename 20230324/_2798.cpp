#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, nb, sum, result = 0;
    cin >> n >> m;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n - 2; i++)
    {
        sum = 0;
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                sum = arr[i] + arr[j] + arr[k];
                if(sum <= m && result < sum)
                    result = sum;
            }
            
        }
        
    }
    cout << result;
}
