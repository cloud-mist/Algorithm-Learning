#include <cstdio>
int main(){
	int n;
	scanf("%d",&n);
	int a[n+1][n+1];
	a[0][0] = 1;
	for (int i = 0;i< n;i++){
		for (int j = 0; j <= i ; ++j)
		{
			if (i == j || j ==0)
			{
				a[i][j] = 1;
			}else{
				a[i][j] = a[i-1][j-1] + a[i-1][j];
			}
		}
	}
	for (int i = 0;i< n;i++){
		for (int j = 0; j <= i ; ++j)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}