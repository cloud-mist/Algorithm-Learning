#include <cstdio>
#include <cstring>
int a[2][3],b[3][2],c[2][2];	//不知道为什么放这里才正确,不能放进main函数？
int main()
{
	while(~scanf("%d" , &a[0][0]) )
	{
	
		for(int i=1;i<3;i++)
        	scanf("%d",&a[0][i]);
      	for(int i=0;i<3;i++)
        	scanf("%d",&a[1][i]);
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 2; ++j)
				 scanf("%d", &b[i][j]);
		}
		for (int i = 0; i < 2; ++i)
		{
			for (int j = 0; j < 2 ; ++j)
			{
				for (int k = 0; k < 3; ++k)
				{
					c[i][j] += a[i][k] * b[k][j]; //最主要的部分
				}
			}
		}
		printf("%d %d\n%d %d\n",c[0][0], c[0][1], c[1][0], c[1][1]);
		memset(c,0,sizeof(c));
	}	
	return 0;
}