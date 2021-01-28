/* 题目：找迷宫的最最短路径
 *
 *
 * 
 */
#include <cstdio>
#include <queue>
using namespace std;

const int INF = 100000000;
typedef pair<int, int> P;

char maze[100][100];
int N, M;
int sx, sy;
int gx, gy;
int d[100][100];
int dx[4] = {1, 0, -1, 0}, dy[4]={0,1,0,-1};

int bfs(){
	queue<P> que;
	for(int i = 0; i < N; i++)		// 所有位置初始化为0
		for(int j = 0; j < M; j++) d[i][j] = INF;
	// 起点加入对列，吧距离设置为0
	que.push(P(sx, sy));
	d[sx][sy] = 0;

	while (que.size()) {
		// 从队列最前端取出元素
		P p = que.front(); que.pop();
		// 如果取出状态是终点，结束搜索
		if(p.first == gx && p.second == gy) break;

		//四方向循环
		for(int i = 0; i < 4; i++){
			int nx = p.first + dx[i], ny = p.second + dy[i];
			
			if(0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != '#' && d[nx][ny] == INF){
				que.push(P(nx, ny));
				d[nx][ny] = d[p.first][p.second] + 1;
			}
		}	
	}
	return d[gx][gy];
}

int main(){
	scanf("%d %d", n, M);
	int res = bfs();
	printf("%d\n", res);
}

 
