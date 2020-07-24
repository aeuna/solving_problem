#include <bits/stdc++.h>
#define x first
#define y second

using namespace std;
string board[102];
int vis[102][102];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n ,m;
    cin >> n >> m;
    for(int i=0;i<n;i++) cin >> board[i];
    for(int i=0;i<n;i++) fill(vis[i],vis[i]+m,-1);
    queue<pair<int,int> > Q;
    Q.push(make_pair(0,0));
    vis[0][0] = 0;
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(int dir=0;dir<4;dir++){
            int nx = cur.x + dx[dir];
            int ny = cur.y + dy[dir];
            if(nx <0 || nx >= n || ny <0 || ny >=m) continue;
            if(board[nx][ny] != '1' || vis[nx][ny] >= 0 ) continue;
            vis[nx][ny] = vis[cur.x][cur.y]+1;
            Q.push(make_pair(nx,ny));
        }
    } 
    cout << vis[n-1][m-1]+1 <<endl;
}