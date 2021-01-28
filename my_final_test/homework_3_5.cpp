// 问题：最长递增子序列

/* 思想：
 * 1.求以a[i]为结尾的递增子序列，找前面比他小的元素，找到他们中的递增子序列的最大值
 * 2.那么以a[i]结尾的递增子序列就是max+1;
 * 3.递归求解a[i]
 * */
#include <cstdio>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int dp[n];
	int max = 1;
	int q;
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	dp[0] = 1;	
	for(int i = 1; i<n; i++ ){
		dp[i] = 1;
		for(int j = 0; j < i; j++){
			if(a[j] < a[i] && dp[i] < dp[j]+1){
				dp[i] = dp[j] + 1;
				
			}
		}
		if(dp[i] >= max){
			max = dp[i];
			
		}
	}	
	printf("%d\n", max);
}
