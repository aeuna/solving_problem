#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << '*';
        }
        for(int j =i*2+2; j < n*2;j++){
            cout << ' ';
        }
        for(int j=0;j<i+1;j++){
        cout << '*';
        }
        cout << '\n';        
    }

    for(int i=0;i<n-1;i++){
        for(int j=i;j<n-1;j++){
            cout << '*';
        }
        for(int j= 0; j< 2*i+2;j++){
            cout << ' ';
        }        
        for(int j=i;j<n-1;j++){
            cout << '*';
        }
        cout << '\n'; 
    }
}