#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, bomb;
    cin >> str >> bomb;
    deque<char> deq;
    for (int i = 0; i < bomb.size() - 1; i++)
        deq.push_back(str[i]);
    for (int i = bomb.size() - 1; i < str.size(); i++)
    {
        bool flag = true;
        deq.push_back(str[i]);
        if (deq.size() < bomb.size()) continue;
        for (int j = 0; j < bomb.size(); j++)
            if(deq[deq.size() - bomb.size() + j] != bomb[j])
            {
                flag = false;
                break;
            } 
        if(flag)
            for (int k = 0; k < bomb.size(); k++)
                if(!deq.empty())
                    deq.pop_back();
    }
    if(deq.empty())
        cout << "FRULA";
    else
       for (int i = 0; i < deq.size(); i++)
            cout<< deq[i];
}