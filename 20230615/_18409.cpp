#include <iostream>
using namespace std;

int main()
{
   int n, cnt = 0;
   char c;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      cin >> c;
      if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
         cnt++;
   }
   cout << cnt;
}