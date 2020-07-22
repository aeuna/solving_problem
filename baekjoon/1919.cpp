#include<bits/stdc++.h>
using namespace std;
int arr1[26];
int arr2[26];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1,s2;
    int ans=0;
    cin >> s1 >> s2;
    for(int i=0;i<s1.length();i++){
        arr1[s1[i]-'a']++;
    }
    for(int i=0;i<s2.length();i++){
        arr2[s2[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(arr1[i] != arr2[i]){
            ans += abs(arr1[i]-arr2[i]);
        }
    }
    cout << ans;
}