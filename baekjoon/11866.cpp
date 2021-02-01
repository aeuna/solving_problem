#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, K;
    int check_num = 0;
    cin >> N >> K;
    queue<int> q;
    for (int i = 1; i <= N; i++)
    {
        q.push(i);
    }
    cout << "<";
    while (!q.empty())
    {
        if (check_num != K - 1)
        {
            int save = q.front();
            q.pop();
            q.push(save);
            check_num++;
        }
        else
        {
            if (q.size() == 1)
                cout << q.front();
            else
                cout << q.front() << ","
                     << " ";
            q.pop();
            check_num = 0;
        }
    }
    cout << ">";
}