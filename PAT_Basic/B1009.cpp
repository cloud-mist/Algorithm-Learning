#include <cstdio>
int main()
{
	int num = 0;
	char ans[90][90];
	while(scanf("%s",ans[i]) != EOF){ 
		num++;
	}

	for (int i = num - 1; i >=0 ; ++i) //反方向输出
	{
		printf("%s",ans[i]);
		if (i > 0)	printf(" ");   //保证末尾没有空格
	}
	return 0;
}
