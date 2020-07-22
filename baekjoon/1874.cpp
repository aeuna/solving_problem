#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    stack<int> stk2;
    vector<char> ans;
    int pre=0;
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int flag1 =1;
        int num; cin >> num;
        if(num >= pre){
            for(int j=pre+1;j<=num;j++){
                stk2.push(j);
                ans.push_back('+');
            }
        }
        else{
            if(stk2.top() != num) {
                cout << "NO\n";
                return 0;
            };
        }
        stk2.pop();
        ans.push_back('-');
        if(num >= pre) pre = num;
    }
    for(auto e : ans) cout << e << '\n';
}