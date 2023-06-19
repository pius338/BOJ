#include <iostream>
using namespace std;

int main()
{
   double a, b;
   cin >> a >> b;
   int res = (a - ((a / 100) * b) < 100)? 1 : 0;
   cout << res;
}