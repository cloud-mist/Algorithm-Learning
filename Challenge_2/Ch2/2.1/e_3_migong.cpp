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

char maze[100][100]; //表示迷宫字符串的数组
int N, M;
int sx, sy; // 起点
int gx, gy; // 终点坐标

int d[100][100];
// 四个方向移动的向量
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int bfs() {
  queue<P> que;

  // 所有位置初始化为INF
  for (int i = 0; i < N; i++)
    for (int j = 0; j < M; j++)
      d[i][j] = INF;
  // 起点加入对列，吧距离设置为0
  que.push(P(sx, sy));
  d[sx][sy] = 0;

  // 循环到队列长度为0
  while (que.size()) {
    // 从队列最前端取出元素
    P p = que.front();
    que.pop();
    // 如果取出状态是终点，结束搜索
    if (p.first == gx && p.second == gy)
      break;

    //四方向循环
    for (int i = 0; i < 4; i++) {
      int nx = p.first + dx[i], ny = p.second + dy[i];

      if (0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != '#' &&
          d[nx][ny] == INF) {
        que.push(P(nx, ny));
        d[nx][ny] = d[p.first][p.second] + 1;
      }
    }
  }
  return d[gx][gy];
}

int main() {
  scanf("%d %d", &N, &M);
  int res = bfs();
  printf("%d\n", res);
}
