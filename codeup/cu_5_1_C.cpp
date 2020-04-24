//这题我写错了，因该是小数边界问题。
//参考baidu同时扩大三倍避免小数问题，，nice。
#include <stdio.h>
int main()
{
	int n;
	while(~scanf("%d", &n) )
	{	
		n *= 3;
		for (int i = 0; i <= 100; i++)
		{
			for (int j= 0; j <= 100 - i; j++)
			{
					int z = 100 - i - j ;
					int sum = 15 * i + 9 * j + z;
					if (sum <= n )
						printf("x=%d,y=%d,z=%d\n",i,j,z);
			}
		}	
	}
	return 0;
}