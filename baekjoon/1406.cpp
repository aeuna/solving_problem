#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    list<char> L;
    string s;
    // int flag =1;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        L.push_back(s[i]);
    }
    list<char>::iterator t = L.end();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char s1;
        cin >> s1;
        if (s1 == 'L')
        {
            if ( t != L.begin())
                t--;
        }
        if (s1 == 'D')
        {
            if ( t != L.end())
                t++;
        }
        if (s1 == 'P')
        {
            char s2;
            cin >> s2;
            L.insert(t, s2);
        }
        if( s1 == 'B'){
            if( t != L.begin()){
                t--;
                t = L.erase(t);
            }
        }    
    }
    for (auto i : L) cout << i;
}