#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[9]={};
    int sum = -100;
    int a, b;
    for(int i=0;i<9;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr,arr+9);
    bool flag = 0;
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(arr[i]+arr[j] == sum){
                a=i;
                b=j;
                flag = 1;
            }
            if(flag) break;
        }
        if(flag) break;
    }

    for(int i=0;i<9;i++){
        if(i != a && i!=b){
            cout << arr[i] << '\n';
        }
    }
}