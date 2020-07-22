#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    list<int> li;
    vector<int> v;
    for(int i=1;i<=n;i++){
        li.push_back(i);
    }
    list<int>::iterator cur = li.begin();
    while(!li.empty()){
        for(int i=0;i<k-1;i++){
            if(cur == li.end()){
                cur = li.begin();
            }
            cur++;
            if(cur == li.end()){
                cur = li.begin();
            }
        } 
        v.push_back(*cur);
        cur = li.erase(cur);
    }
    cout << '<';
    for(int i=0; i<v.size()-1;i++){
        cout << v[i] << ", ";
    }
    cout << v[v.size()-1];
    cout << '>';
}