#include <cstdio>
#include <queue>
using namespace std;

/* front 访问队首元素
 * pop 队首元素出队
 */

int main() {
  queue<int> que;
  que.push(1);                 // {} -> {1}
  que.push(2);                 // {1} -> {1,2}
  que.push(3);                 // {1, 2} -> {1, 2, 3}
  printf("%d\n", que.front()); // 1

  que.pop();
  printf("%d\n", que.front()); // 2

  que.pop();
  printf("%d\n", que.front()); // 3

  que.pop();

  return 0;
}
