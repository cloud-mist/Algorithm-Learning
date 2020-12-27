// 1.问题：最大连续子序列和
/* 2.思想 
 *	2.1 dp[i] 代表以i结尾的最大连续子序列和
 *	  2.2.1 dp只有一个元素，那么就是本身
 *	  2.2.2 dp[i]有多个元素，，那么就是dp[i-1]+A[i]
 *	  2.2.3 所以dp[i] = 以上的最大的一个
 * */

#include <cstdio>
#include <algorithm>
using namespace std;

const int maxn = 10000;
int A[maxn], dp[maxn];

int main(){
	int n;
	// 输入数据
	scanf("%d", &n);
	for (int i = 0; i < n; i++) 
		scanf("%d", &A[i]);
	
	// 边界
	dp[0] = A[0];
	for(int i = 1; i< n; i++)
		dp[i] = max(A[i], dp[i-1]+A[i]);

	// 选择最大的dp
	int k = 0;
	for(int i = 0; i < n; i++){
		if(dp[i] > dp[k])
			k = i;
	}
	printf("max is: %d\n", dp[k]);
	return 0;
}
