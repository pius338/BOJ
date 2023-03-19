#include <iostream>
#include <vector>
using namespace std;

double grade_cal(string str)
{
    double result = 0.0;
    if(str.at(0) != 'F')
    {
        result += 5.0 - ((double)str.at(0) - 64.0);
        if(str.at(1) == '+')
            result += 0.5;
    }
    return (result);
}

int main()
{
    double credit = 0.0, total = 0.0;
    vector<string> s_arr(20);
    vector<pair<double, string>> p_arr(20);
    for (int i = 0; i < 20; i++)
    {
        cin >> s_arr[i] >> p_arr[i].first >> p_arr[i].second;
        if(p_arr[i].second.at(0) != 'P')
        {
            total += p_arr[i].first * grade_cal(p_arr[i].second);
            credit += p_arr[i].first;
        }
    }
    cout << fixed;
    cout.precision(6);
    cout << total / credit << '\n';
}