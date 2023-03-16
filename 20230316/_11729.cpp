#include <iostream>
using namespace std;

int count = 0;

void hanoi(int n, int src, int dest, int temp)
{
    if(n == 0)
    {
        cout << count << '\n';
        return ;
    }
    else
    {
        hanoi(n - 1, src, temp, dest);
        cout << src << " " << dest << '\n';
        count++;
        hanoi(n - 1, temp, dest, src);
    }
    
}

int main()
{
    int n;
    cin >> n;
    hanoi(n, 1, 3, 2);
    
}