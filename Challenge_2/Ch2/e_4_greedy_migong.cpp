/* 问题：硬币问题
 * 有不同面值硬币若干，求用最少硬币得到A.
 *
 * 思想：尽量用大面值的
 *
 * 
 */
#include <cstdio>
#include <algorithm>
using namespace std;

const int V[6] = {1, 5, 10, 50, 100, 500};
int main(int argc, char *argv[])
{
	int C[6];
	int A;
	for (int i = 0; i <= 5; ++i) {
		scanf("%d", &C[i]);
	}
	scanf("%d", &A);
	
	int ans = 0;
	for (int i = 5; i >= 0; i--) {
		int t = min(A/V[i], C[i]);	// 使用硬币i的枚数
		A -= t * V[i];
		ans += t;
	}
	printf("%d\n", ans);
	return 0;
}

// 3 2 1 3 0 2 620
// output：6

