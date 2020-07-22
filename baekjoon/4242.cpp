#include<bits/stdc++.h>

using namespace std;

int main(){
    while(1){
        string s;
        stack<char> stk;
        bool flag = true;
        getline(cin,s);
        if(s == ".") break;
        for(int i=0;i<s.length();i++){
            if (s[i] == '(' || s[i] == '['){
                stk.push(s[i]);
            }
            else if (s[i] == ')'){
                if(stk.empty() || stk.top() != '('){
                    flag = false;
                    break;
                }
                stk.pop();
            }
            else if (s[i] == ']'){
                if(stk.empty() || stk.top() != '['){
                    flag = false;
                    break;
                }
                stk.pop();
            }
        }
        if( flag && stk.empty()) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}