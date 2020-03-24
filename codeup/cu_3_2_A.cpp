//注意sum和输出的位置!!
#include <cstdio>
#include <cstring>
int main(){
	int n,jige;
	int  a[1010];
	while(scanf("%d", &n) != EOF)
	{
	if(n==0) break;
	for (int i = 0; i <n; ++i)
	{
		scanf("%d",&a[i]);		
	}
	scanf("%d",&jige);
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == jige)   sum++;
	}
	
	printf("%d\n", sum);
	}
	return 0;
}
