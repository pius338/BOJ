#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int nbr_0[t], nbr_1[t];
    for(int i = 0; i < t; i++)
        cin >> nbr_0[i] >> nbr_1[i];
    for(int j = 0; j < t; j++)
        cout << nbr_0[j] + nbr_1[j] << '\n';
}