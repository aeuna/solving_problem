#include<bits/stdc++.h>
using namespace std;
#define x first
#define y second
int board[101][101];
int vis[101][101];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v;
    int m,n,k;
    int count =0;
    int land = 0;
    cin >> m >> n >> k;
    for(int i=0;i<k;i++){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int z = y1; z < y2; z++) {
			for (int k = x1; k < x2; k++) {
				board[z][k] = 1;
			}
		}
        // for( int j = m-y2 ; j<m-y1;j++){
        //     for(int l=x1;j<x2;j++){
        //         board[l][j] = 1;
        //     }
        // }
    }

    for(int i=0; i<m; i++){
        for(int j=0;j<n;j++){
            if(board[i][j] == 0 && vis[i][j] == 0){
                land++;
                queue<pair<int,int> > Q;
                vis[i][j] = 1;
                Q.push(make_pair(i,j));
                while(!Q.empty()){
                    auto cur = Q.front(); Q.pop();
                    for(int dir=0; dir<4; dir++){
                        int nx = cur.x + dx[dir];
                        int ny = cur.y + dy[dir];
                        if(nx < 0 || nx >= m || ny < 0 || ny >= n ) continue;
                        if(board[nx][ny]|| vis[nx][ny]) continue;
                        vis[nx][ny] = 1;
                        Q.push(make_pair(nx,ny));
                    }
                    count++;
                }
            }
            if(count != 0) {
                v.push_back(count);
                count =0;
            }
        }
    }
    cout << land << endl;
    sort(v.begin(),v.end());
    for(auto i : v) cout << i << ' ';
}