#include<bits/stdc++.h>

using namespace std;

int main(){
    int year;
    int flag = 0;
    cin >> year;
    if(year%4 == 0 && year%100 !=0){
        flag = 1;
    }
    if(year%400 == 0){
        flag = 1;
    }
    cout << flag;

}