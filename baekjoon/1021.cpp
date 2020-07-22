#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    int count=0;
    deque<int> dq;
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        dq.push_back(i);
    }
    for(int i=0; i<m; i++){
        int l;
        cin >> l;
        int index;
        for(int j=0;j<dq.size();j++){
            if(dq[j] == l){
                index = j;
                break;
            }
        }
        
        if(index < dq.size()-index){
            while(1){
                if(dq.front() == l){
                    dq.pop_front();
                    break;
                }
                count++;
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else{           
            while(1){
                if(dq.front() == l){
                    dq.pop_front();
                    break;
                }
                count++;
                dq.push_front(dq.back());
                dq.pop_back();
            }     
        }
    }
    cout << count;
}