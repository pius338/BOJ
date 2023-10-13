#include <iostream>
using namespace std;

int main(){
    int n;
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        arr[n]++;
    }
    for (int i = 0; i < 10; i++)
        if(arr[i] % 2)
            cout << i;
}