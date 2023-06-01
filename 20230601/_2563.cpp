#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, x, y;
    vector<vector<int>> paper(100, vector<int> (100, 0));
 
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        x--; y--;
        for (int j = 0; j < 10; j++)
            for (int k = 0; k < 10; k++)
                paper[x + j][y + k]++;
    }
    int cnt = 0;
    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            if(paper[i][j])
                cnt++;
    cout << cnt;
}
