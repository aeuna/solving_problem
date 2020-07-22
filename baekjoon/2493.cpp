#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v;
    vector<int> save;
    stack<int> stk;
    int max=0, mid=0,index1, index2;
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int a; cin >> a;
        v.push_back(a);
    }
    for(int i=n-1;i>=0;i--){
        stk.push(v[i]);
    }
    for(int i=0;i<n;i++){
        if(stk.top()>max){
            max = stk.top();
            index1= i+1;
            save.push_back(0);
        }
        else{
            
            if(mid > stk.top()){
                if(abs(index1-(i+1)) >= abs(index2-(i+1))) save.push_back(index2);
            } 
            else {
                save.push_back(index1);
            }
            mid = stk.top();
            index2 = i+1;
        }
        stk.pop();        
    }
    for(auto e : save) cout << e <<' ';
    
}



        // if(stk.empty() && flag==1){
        //     stk.push(num);
        //     v.push_back(0);
        //     max = num;
        //     index = i;
        //     flag = 0;
        // } 
        // if(num > max){
        //     max = num;
        //     index = i; 
        //     stk.pop();
        //     v.push_back(0);
        //     stk.push(num);
        // }
        // if(num < max){            
        //     if(num < stk.top()){
        //         v.push_back(i-1);
        //         stk.push(num);
        //     }
        //     else{
        //         stk.pop();
        //         stk.push(num);
        //         v.push_back(index);
        //     }
        // }