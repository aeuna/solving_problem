#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    map<string, int> map1;
    while (N--)
    {
        string s;
        cin >> s;
        sort(begin(s), end(s));
        map1[s] = 1;
    }
    cout << map1.size();
}