#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n, m;
  cin >> n;
  vector<vector<int>> arr(n + 1, vector<int>(3, 0));
  for (int i = 1; i < n + 1; i++)
  {
    for (int j = 0; j < 3; j++)
    {
		cin >> m;
		arr[i][j] = min(arr[i - 1][(j + 1) % 3], arr[i - 1][(j + 2) % 3]) + m;
    }
  }
  cout << *min_element(arr[n].begin(), arr[n].end());
}