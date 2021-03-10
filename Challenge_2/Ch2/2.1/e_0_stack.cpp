#include <cstdio>
#include <stack>
using namespace std;

/* pop 移除最顶端元素
 * top 访问最顶端元素
 * push 在栈顶放一组元素
 */

int main() {
  stack<int> s;            // 声明存储int类型的栈
  s.push(1);               // {} -> {1}
  s.push(2);               // {1} -> {1, 2}
  s.push(3);               // {1, 2} -> {1, 2, 3}
  printf("%d\n", s.top()); // 3

  s.pop();
  printf("%d\n", s.top()); // 2

  s.pop();
  printf("%d\n", s.top()); // 1

  return 0;
}
