#include <iostream>
#include <stack>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    string infix;
    stack<pair<char, int>> stc;
    unordered_map<char, int> mp;
    cin >> infix;
    stc.push({'^', 0});
    mp['+'] = 1; mp['-'] = 1; mp['*'] = 2; mp['/'] = 2; mp['('] = 3;
    for (int i = 0; i < infix.size(); i++)
    {
        if(infix[i] >= 'A' && infix[i] <= 'Z')
            cout << infix[i];
        else if(!stc.empty() && infix[i] == ')')
        {
            while(stc.top().first != '(')
            {
                if(stc.top().first != '^')
                    cout << stc.top().first;
                stc.pop();
            }
            stc.pop();
        }
        else
        {
            while(!stc.empty() && mp[infix[i]] <= stc.top().second && stc.top().first != '(')
            {
                if(stc.top().first != '^')
                    cout << stc.top().first;
                stc.pop();
            }
            switch (infix[i])
            {
            case '+':
                stc.push({'+', mp['+']});
                break;
            case '-':
                stc.push({'-', mp['-']});
                break;
            case '/':
                stc.push({'/', mp['/']});
                break;
            case '*':
                stc.push({'*', mp['*']});
                break;
            case '(':
                stc.push({'(', 0});
                break;
            }
        }
    }
    while(!stc.empty())
    {
        if(stc.top().first != '^')
            cout << stc.top().first;
        stc.pop();
    }
}