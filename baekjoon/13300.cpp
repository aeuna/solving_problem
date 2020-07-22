#include<bits/stdc++.h>
using namespace std;
int grade0[7];
int grade1[7];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    int ans=0;
    cin >> n >> k;
    for(int i=1;i<n+1;i++){
        int s,y;
        cin >> s >> y;
        if (s == 0){
            grade0[y]++;
        }
        else{
            grade1[y]++;
        }
    }

    for(int i=1;i<7;i++){
        ans += grade0[i]/k;
        if(grade0[i]%k >= 1) ans++;
        ans += grade1[i]/k;
        if(grade1[i]%k >= 1) ans++;
    }
    cout << ans;
}