#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    queue<int> que;
    vector<int> arr;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        que.push(i + 1);
    int i = 0, cnt = 0;
    while(i < n)
    {
        if(cnt == k - 1)
        {
            cnt = 0;
            arr.push_back(que.front());
            que.pop();
            i++;
        }
        else
        {
            cnt++;
            que.push(que.front());
            que.pop();
        }
    }
    cout << '<';
    for (int i = 0; i < arr.size() - 1; i++)
        cout << arr[i] << ", ";
    cout << *(arr.end() - 1);
    cout << '>';
    
}
