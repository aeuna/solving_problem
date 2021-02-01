#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<pair<int, int> > v;
    int rank[50] = {0};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
   
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i].first < v[j].first)
            {
                if (v[i].second < v[j].second)
                    rank[i]++;
            }else {
                if(v[i].second > v[j].second)
                    rank[j]++;
            }
        }
    }

    for(int i=0 ; i< n; i++) cout << rank[i]+1 << " ";
    cout << endl;
}