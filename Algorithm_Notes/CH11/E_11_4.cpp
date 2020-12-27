// LCS 最长公共子序列

/* 1.问题 给定两个字符串A,B, 求一个字符串是最长公共部分，可以不连续
 * 2.想法
 * 2.1 dp[i][j] 表示 A的i号位和B的j号位之前的LCS长度
 * 2.1.1 若A[i] = B[j], 则dp=dp[i-1][j-1]+1
 * 2.1.2 若不等， 则dp = max(dp[i-1][j], dp[i][j-1])
 * 2.1.3 边界 dp[i][0] ,dp[0][j] = 0
 * */

#include <cstdio>
#include <algorithm>
#include <string.h>
using namespace std;

const int N = 100;
char A[N], B[N];
int dp[N][N];

int main(){
	// 读入数据，计算读取的长度
	gets(A+1);
	gets(B+1);

	int lenA = strlen(A + 1);
	int lenB = strlen(B + 1);

	// 边界
	for(int i = 1; i <= lenA; i++)
		dp[i][0] = 0;
	for(int j = 1; j <= lenB; j++)
		dp[0][j] = 0;

	// 状态转移方程
	for(int i = 1; i<= lenA; i++){
		for(int j = 1; j <= lenB; j++){
			if(A[i] == B[j])
			{
				dp[i][j] = dp[i-1][j-1] + 1;
			}else{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}
	
	// 输出
	printf("%d\n", dp[lenA][lenB]);
	return 0;
}

