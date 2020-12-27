// 最大连续子序列

#include <cstdio>
#include <algorithm>
using namespace std;

const int maxn = 10000;
int A[maxn], dp[maxn];

int main(){
	int n;
	// 输入数据
	while(~scanf("%d", &n)){
		if(n == 0) break; // 0个数就停止

		// 如果全是负数 输出 0 序列第一个和最后一个
		int t = 0;
		for (int i = 0; i < n; i++) {	
			scanf("%d", &A[i]);
			if(A[i]<0)	t++;
		}
		if(t == n){
			printf("0 %d %d\n", A[0], A[n-1]);
			break;
		}
	
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
	
	// 找大值左边的界，只要向左遍历到和最大值的和一样的就停止，记录那个位置。
	int left = 0;
	int result = 0;
	for(int i = k; i >=0 ; i--){
		result += A[i];
		if(result == dp[k])
			left = i;
	}
	printf("%d %d %d\n", dp[k], A[left], A[k]);
	
	}
	return 0;
}
