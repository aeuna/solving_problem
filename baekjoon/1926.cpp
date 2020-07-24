#include<bits/stdc++.h>

using namespace std;

#define x first
#define y second
int board[501][501];
int vis[501][501];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,count=0,max =0;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> board[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j] == 1 && vis[i][j] == 0){
                int max_count = 0;
                queue<pair<int,int> > Q;
                vis[i][j] = 1;
                Q.push(make_pair(i,j));
                while(!Q.empty()){
                    pair<int,int> cur = Q.front(); Q.pop();
                    for(int dir=0;dir<4;dir++){
                        int nx = cur.x + dx[dir];
                        int ny = cur.y + dy[dir];
                        if(nx < 0 || nx > n || ny <0 || ny > m) continue;
                        if(vis[nx][ny] || board[nx][ny] != 1) continue;
                        vis[nx][ny] =1;
                        Q.push(make_pair(nx,ny));
                    }
                    max_count++;
                }
                if(max_count > max) max = max_count;
                count++;
            }
        }
    }
    cout << count << endl << max;
}