// 租游艇问题

/* 思想：
 * 1.从长度为r=2的开始找，
 * 2. r[i,k]+r[k,j]看看是否比r[i,j]要小。
 *
 * */

#include <cstdio>
int main(){
	int n;
	scanf("%d", &n);
	int a[200][200] = { 0 };
	for(int i = 1; i < n; i++){
		for(int j = i + 1; j <= n; j++){
			scanf("%d", &a[i][j]);
		}
	}

	for(int r = 2; r <= n; r++){
		for(int i = 1; i <= n-r+1; i++){
			// r[i, j]的长度为r
			int j = i + r - 1;
			for(int k = i; k <= j; k++){
				int t= a[i][k] + a[k][j];
				if(t < a[i][j]){
					a[i][j] = t;
				}
			}
		}
	}
	printf("%d", a[1][n]);
}
