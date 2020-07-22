#include<bits/stdc++.h>
using namespace std;
int n,num;
stack<pair<int,int> > stk;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> num;
        while(!stk.empty()){
            if(stk.top().second > num) {
                cout << stk.top().first << ' ';
                break;
            }
            stk.pop();
        }
        if(stk.empty()) cout << "0 ";
        stk.push(make_pair(i,num));
    }
}