#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string mbti;
    cin >> mbti;
    for (int i = 0; i < mbti.length(); i++)
    {
        if (mbti[i] == 'E')
        {
            cout << 'I';
        }
        else if (mbti[i] == 'I')
        {
            cout << 'E';
        }
        else if (mbti[i] == 'S')
        {
            cout << 'N';
        }
        else if (mbti[i] == 'N')
        {
            cout << 'S';
        }
        else if (mbti[i] == 'T')
        {
            cout << 'F';
        }
        else if (mbti[i] == 'F')
        {
            cout << 'T';
        }
        else if (mbti[i] == 'J')
        {
            cout << 'P';
        }
        else if (mbti[i] == 'P')
        {
            cout << 'J';
        }
    }
}