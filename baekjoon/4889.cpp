#include <bits/stdc++.h>

using namespace std;

int main(){
    int i=1;
    while(1){
        int count = 0;
        string s;
        stack<char> stk;
        cin >> s;
        if(s[0] == '-') break;
        for(int i=0; i< s.length(); i++){
            if (s[i] == '{') stk.push(s[i]);
            else{
                if(stk.empty()){
                    stk.push('{');
                    count++;
                }
                else{
                    if(stk.top() == '{')  stk.pop();
                }
            }
        }
        count += (int)stk.size()/2;
        cout << i << '.'<< ' ' << count << endl;
        i++;
    }
}