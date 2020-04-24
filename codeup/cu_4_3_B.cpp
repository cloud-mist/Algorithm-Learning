//打印斐波那契图形
#include <cstdio>
int cmp(int n){
	if (n == 0 )	return 0;
	else if(n == 1 || n == 2) return 1;
	else return cmp(n-1)+cmp(n-2);
}
int main(){
	int n,m;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d", &m);
		for (int i = 0; i < m; ++i)
		{
			for(int t = 0; t< 2*(m-1)-2*i;t++)//构造图形前面的空格数
				printf(" ");
			for (int j = 0; j < 2*i+1; ++j)
				printf("%d ", cmp(j));		//递归打印每行的斐波那契数列
			printf("\n");
		}
	}
	return 0;
}