#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N, M;
        cin >> N >> M;
        int U = 2 * M - N;
        cout << U << " " << M - U << endl;
    }
}