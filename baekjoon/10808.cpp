#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int arr[27];
    fill(arr,arr+27,0);
    cin >> s;
    for(int i=0;i<s.length();i++){
        arr[s[i]-97]++;
    }
    for(int i=0;i<26;i++){
        cout << arr[i]<< ' ';
    }
    
}
// int arr[26];
// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     string s;
//     cin >> s;
//     for(auto a: s){
//         arr[a-97]++;
//     }
//     for(int i=0;i<26;i++){
//         cout << arr[i]<< ' ';
//     }
    
// }

