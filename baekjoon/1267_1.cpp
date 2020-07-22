#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num;
    int ans1=0,ans2=0;
    cin >> num;
    for(int i=0;i<num;i++){
        int flag =1;
        int num1;
        cin >> num1;
        if(flag == 1){
            if(num1%30 < 30){
                ans1 += 10;
            }
            ans1 += num1/30*10;
            flag = 0;
        }
        if(flag==0){
            if(num1%60 < 60){
                ans2 += 15;
            }
            ans2 += num1/60*15;
        }
        
    }

    if(ans1>ans2){
        cout << "M" << ' ' << ans2;
    }
    else if(ans1 < ans2){
        cout << "Y" << ' ' << ans1;
    }
    else{
        cout << "Y" << ' ' << "M" << ' ' << ans2;
    }

}