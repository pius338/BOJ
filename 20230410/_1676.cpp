#include <iostream>
using namespace std;

int main() {
  int n, cnt = 0;
  cin >> n;
  for (int i = n; i > 0; i--) {
    int j = i;
    while (!(j % 5)) {
      j /= 5;
      cnt++;
    }
  }
  cout << cnt;
}