#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, sum = 0, nbr = 1, digit, sub;
    cin >> n;
    while(nbr < n)
    {
        sum = 0;
        digit = 0;
        sub = nbr; 
        vector<int> arr;
        while(sub)
        {
            arr.push_back(sub % 10);
            if(sub / 10 < 10)
                arr.push_back(sub / 10);
            sub /= 10;
            digit++;
        }
        for (int i = 0; i < digit; i++)
            sum += arr[i];
        if(nbr + sum == n)
        {
            cout << nbr;
            return (0);
        }
        nbr++;
    }
    cout << 0;
     
    
    
}
