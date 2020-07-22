#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    queue<int> q;
    int n; cin >> n;
    for (int i=0; i<n; i++){
        q.push(i+1);
    }
    while(!q.empty()){
        if(q.size()==1) break;
        if (!q.empty()) q.pop();
        int n;
        n = q.front();
        q.pop();
        q.push(n);
    }
    cout << q.front();
}