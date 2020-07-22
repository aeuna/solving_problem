#include<bits/stdc++.h>
using namespace std;
int arr[10];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,ans1=0,max=0;
    cin >> n;
    if(n==0){
        max = 1;
    }
    while(n>0){
        arr[n%10]++;
        n = n/10;
    }
    if((arr[6]+arr[9])%2 == 0){
        ans1 = (arr[6]+arr[9])/2;
    }
    else{
        ans1 = (arr[6]+arr[9])/2 +1;
    }
    arr[6] = 0;
    arr[9] = 0;
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    if(max > ans1)  cout << max << '\n' ;
    else cout << ans1 << '\n' ;
}