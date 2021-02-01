#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
char board[102][102];
int vis[102][102];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void bfs(int i, int j, int N){
	queue<pair<int,int> >Q;
	vis[i][j] = 1;
	Q.push(make_pair(i,j));
	while(!Q.empty()){
		pair<int,int> cur = Q.front(); Q.pop();
		for(int dir =0 ; dir<4; dir++){
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
			if(vis[nx][ny] || board[nx][ny] != board[cur.X][cur.Y]) continue;
			vis[nx][ny] = 1;
			Q.push(make_pair(nx,ny));
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N; cin >> N;
	int ans=0, ans1=0;
	for (int i=0; i< N; i++){
		for(int j=0; j<N;j++){
			cin >> board[i][j];
		}
	}
	for(int i=0; i<N;i++){
		for(int j=0; j<N; j++){
			if(!vis[i][j]){
				bfs(i,j,N);
				ans++;
			}
		}
	}
	memset(vis, 0, sizeof(vis));
	for(int i=0; i< N ; i++){
		for(int j=0; j< N; j++){
			if(board[i][j] == 'G') board[i][j] = 'R';
		}
	}
	for(int i=0; i<N;i++){
		for(int j=0; j<N; j++){
			if(!vis[i][j]){
				bfs(i,j,N);
				ans1++;
			}
		}
	}
	cout << ans << " " << ans1 << endl;
}
