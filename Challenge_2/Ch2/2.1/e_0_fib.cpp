// fib的递归和非递归写法

#include <cstdio>
#define MAX_N 10000

int fib_v1(int n) {
  if (n <= 1)
    return n;
  return fib_v1(n - 1) + fib_v1(n - 2);
}

int memo[MAX_N + 1] = {0};

int fib_v2(int n) {
  if (n <= 1)
    return n;
  // 不为0说明，已经得到结果
  if (memo[n] != 0) {
    return memo[n];
  }
  // 否则，一直向下递归搜索能够的到的结果，再迭代得到所要结果，
  return memo[n] = fib_v2(n - 1) + fib_v2(n - 2);
}

int main() {
  printf("%d", fib_v2(46));
  return 0;
}
