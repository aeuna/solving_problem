#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    char board[50][50];
    int min_num = 2000;
    int cntB = 0, cntW = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> board[i][j];
        }
    }
    for (int i = 0; i < N - 7; i++)
    {
        for (int j = 0; j < M - 7; j++)
        {
            cntB = 0;
            cntW = 0;
            for (int k = i; k < i + 8; k++)
            {
                for (int l = j; l < j + 8; l++)
                {
                    if ((k + l) % 2 == 0)
                    {
                        if (board[k][l] == 'B')
                            cntW++;
                        else
                            cntB++;
                    }
                    else
                    {
                        if (board[k][l] == 'B')
                            cntB++;
                        else
                            cntW++;
                    }
                }
            }
            min_num = min(min_num, cntW);
            min_num = min(min_num, cntB);
        }
    }
    cout << min_num;
}