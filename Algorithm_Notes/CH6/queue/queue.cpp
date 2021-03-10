/*queue  先进先出
用途：实现广度优先搜索时，可以不用自己手动实现一个队列，直接用queue
注意：使用front和pop。要先判断队列是否为空。
特别：还有双端队列deque  和 优先队列
*/

#include <cstdio>
#include <queue>
using namespace std;
int main() {
  // 1.定义一个队列
  queue<int> q;

  // 2.push(i)  将i压入队列
  for (int i = 1; i <= 5; ++i)
    q.push(i);

  // 3.front访问队首元素 & back队尾元素
  printf("%d %d\n", q.front(), q.back()); // 1 5

  // 4.pop() 队首元素出队 O(1)
  for (int i = 1; i <= 3; ++i)
    q.pop();                                        //出队1，2，3
  printf("pop1,2,3 and now front:%d\n", q.front()); // pop1,2,3 and now front:4

  // 5.empty() 检测是否为空 ，true空  false非空  O(1)
  queue<int> q2;
  if (q2.empty() == true)
    printf("empty\n");
  else
    printf("not empty.\n"); // empty

  q2.push(1);
  if (q2.empty() == true)
    printf("empty\n"); // not empty.
  else
    printf("not empty.\n");

  // 6.size()   返回元素个数 O(1)
  printf("%ld\n", q2.size()); // 1
  return 0;
}
