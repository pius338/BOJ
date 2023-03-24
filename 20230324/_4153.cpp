#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    string str;
	vector<int> arr(3);
	while (1)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> n;
            if(n == 0)
                return (0);
            arr[i] = n;
        }
        sort(arr.begin(), arr.end());
        str = (pow(arr[2], 2) - (pow(arr[0], 2) + pow(arr[1], 2))) ? "wrong" : "right";
        cout << str << '\n';
    }	
}
