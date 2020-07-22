#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        list<char> li;
        list<char>::iterator cur = li.begin();
        string s1;
        cin >> s1;
        for(int j=0;j<s1.length();j++){
            if(s1[j] == '<'){
                if(cur != li.begin()) cur--;
            }
            else if(s1[j] == '>'){
                if(cur != li.end()) cur++;
            }
            else if(s1[j] == '-' ){
                if(cur != li.begin()){
                cur--;
                cur = li.erase(cur);
                }
            }
            else{
                li.insert(cur,s1[j]);
            }
        }
        for(auto e:li) cout << e ;
        cout << '\n';
    }
}