#include<bits/stdc++.h>

using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[3]={};
    for(int i=0;i<3;i++){
        int a;
        cin >> a;
        arr[i] = a;
    }
    sort(arr,arr+3);
    for(int i=0;i<3;i++){
        cout << arr[i] << ' ';
    }

}