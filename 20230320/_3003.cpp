#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> arr {1, 1, 2, 2, 2, 8};
    vector<int> r_arr(6, 0);
    for (int i = 0; i < 6 ; i++)
    {
        cin >> n;
        if(n != arr[i])
        {  
            while(n != arr[i])
            {
                if(n < arr[i])
                {
                    n++;
                    r_arr[i]++;
                }
                else
                {
                    n--;
                    r_arr[i]--;
                }
            }
        }
    }
    for (int i = 0; i < 6; i++)
        cout << r_arr[i] << ' ';
}