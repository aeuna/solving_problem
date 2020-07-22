#include<bits/stdc++.h>

using namespace std;

int arr[10]; 

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,ans;
    cin >> a >> b >> c;
    ans = a*b*c;
    while(ans != 0){
        arr[ans%10]++;
        ans /= 10; 
    }
    for(int i=0;i<10;i++){
        cout << arr[i] << '\n';
    }
}