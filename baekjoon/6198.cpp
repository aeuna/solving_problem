#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    long long num, ans=0;
    stack<pair<int,int> > stk;
    cin >> n;
    int count=0;
    for(int i=1;i<=n;i++){
        cin >> num;
        while(!stk.empty() && stk.top().second <= num){
            stk.pop();
        }
        stk.push(make_pair(i,num));
        ans += stk.size()-1;      
    }
    cout << ans;
}
