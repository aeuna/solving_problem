#include<bits/stdc++.h>

using namespace std;

int main(){
    long long num1,num2;
    cin >> num1 >> num2;
    if(num1 > num2) swap(num1, num2);
    if(num1 == num2) cout << 0;
    if(num1 < num2){
        cout << num2-num1-1 << '\n';
    }
    for(long long i = num1+1;i<num2;i++){
        cout << i << ' ';
    }
}