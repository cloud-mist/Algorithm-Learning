// 题目：部分和问题。给你一些数和目标值，判断是否可以从中选出若干，使它们之和为目标值

// 思路; 决定每个数加还是不加， 全部n个数都决定后，然后再判断他们的和是不是k

#include <cstdio>
int n, k;
int a[10000];
bool dfs(int i, int sum);

int main() {
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  if (dfs(0, 0))
    printf("yes\n");
  else
    printf("no");
  return 0;
}

bool dfs(int i, int sum) {
  // 从前i项得到了sum, 对i项后的进行分支
  if (i == n)
    // 若前n项都计算过了， 返回（sum是否和k相等）
    return sum == k;
  if (dfs(i + 1, sum)) // 不加a[i]
    return true;
  if (dfs(i + 1, sum + a[i])) // 加上
    return true;
  return false; // 不论加或者不加，都不等于k
}
