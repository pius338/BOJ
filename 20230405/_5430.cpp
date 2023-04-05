#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        string str, com, buf;
        
        bool flag = true, iserr = false;
        cin >> com >> m >> str;
        str.erase(str.begin());
        str.erase(str.end() - 1);
        istringstream ss(str);
        deque<string> deq;
        while(getline(ss, buf, ','))
        {
            deq.push_back(buf);
        }
        if(deq.size() > m)
            iserr = true;
        for (int l = 0; l < com.size(); l++)
        {
            if(com[l] == 'R')
                flag = !flag;
            if(com[l] == 'D')
            {
                if(!deq.empty())
                {
                    if(flag)
                        deq.pop_front();
                    else
                        deq.pop_back();
                }
                else
                    iserr = true;
            }
        }
        if(iserr)
            cout << "error" << '\n';
        else
        {
            if(flag)
            {
                cout << '[';
                for (int k = 0; k < deq.size(); k++)
                {
                        cout << deq[k];
                        if(k != deq.size() - 1)
                            cout << ',';
                }
                cout << "]\n";
            }
            else
            {
                cout << '[';
                for (int k = deq.size() - 1; k >= 0; k--)
                {
                        cout << deq[k];
                        if(k)
                            cout << ',';
                }
                cout << "]\n";
            }
        }
    }
}