#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    int n, m, flag = 0;;
    cin >> n;
    stack<int> stc;
    vector<int> arr(n + 1, 0);
    vector<char> r_arr;
    stc.push(0);
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        
        if(stc.top() <= m)
        {
            for (int j = stc.top() + 1; j <= m; j++)
            {
                if(!arr[j])
                {
                    stc.push(j);
                    r_arr.push_back('+'); 
                }
            }
            if(stc.top() == 0 || stc.empty())
                flag++;
            else
            {
                arr[stc.top()]++;
                stc.pop();
                r_arr.push_back('-'); 
            }
        }
        else
        {
            for (int k = stc.top(); k >= m; k--)
            {
                if(arr[k] == 1 || stc.top() == 0 || stc.empty())
                    flag++;
                else
                {
                    arr[k]++;
                    stc.pop();
                    r_arr.push_back('-'); 
                }
            }
        }    
    }
    if(!flag)
        for (int i = 0; i < r_arr.size(); i++)
            cout << r_arr[i] << '\n';
    else
        cout << "NO";   
}