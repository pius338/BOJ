#include <iostream>
using namespace std;

int main()
{
    int n;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if(str == "Algorithm")
            cout << "204\n";
        else if(str == "DataAnalysis")
            cout << "207\n";
        else if(str == "ArtificialIntelligence")
            cout << "302\n";
        else if(str == "CyberSecurity")
            cout << "B101\n";
        else if(str == "Network")
            cout << "303\n";
        else if(str == "Startup")
            cout << "501\n";
        else
            cout << "105\n";
    }
}