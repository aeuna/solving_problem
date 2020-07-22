#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[5]={};
    int sol1=0;
    for(int i=0;i<5;i++){
        cin >> arr[i];
        sol1 += arr[i];
    }
    sort(arr,arr+5);
    cout << sol1/5 << '\n' << arr[2];
}