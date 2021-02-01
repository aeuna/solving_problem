#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int sum = -100;
    int arr[9] = {};
    int a, b;
    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                a = arr[i];
                b = arr[j];
            }
        }
    }
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] != a && arr[i] != b)
            cout << arr[i] << endl;
    }
}