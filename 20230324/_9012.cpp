#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n, size, flag;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        flag = 0;
        cin >> str;
        stack<int> stc;
        for (int j = 0; j < str.size(); j++)
        {
            if(str[j] == '(')
                stc.push(1);
            if(str[j] == ')')
            {
                if(stc.empty())
                {
                    cout << "NO" << '\n';
                    flag++;
                    break;
                }
                stc.pop();
            }   
        }
        if(stc.empty() && !flag)
            cout << "YES" << '\n';    
        else if(!stc.empty() && !flag)
            cout << "NO" << '\n';
    }
}
