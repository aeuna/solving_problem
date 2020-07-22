#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int flag = 1;
        string s1;
        string s2;
        int arr1[26];
        int arr2[26];
        fill(arr1,arr1+26,0);
        fill(arr2,arr2+26,0);
        cin >> s1 >> s2;
        for(int j=0;j<s1.length();j++){
            arr1[s1[j]-'a']++;
        }
        for(int j=0;j<s2.length();j++){
            arr2[s2[j]-'a']++;
        }
        for(int j=0;j<26;j++){
            if(arr1[j] != arr2[j]){
                flag = 0;
            }
        }
        if(flag == 1) cout << "Possible"<<'\n';
        else cout << "Impossible"<<'\n';
    }
}