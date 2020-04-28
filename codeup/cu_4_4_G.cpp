#include <cstdio>
struct fangan
{
	int x;
	int y;
}fa[5];
int main()
{
	int	a[5] = {50,20,10,5,1};
	int n;
	while(~scanf("%d", &n))
	{
		for (int i = 0; i < 5; ++i)
		{
			if (i == 0)
			{
				fa[i].x = n % a[i];
				fa[i].y = n / a[i];
			}else{
				fa[i].x = fa[i-1].x % a[i];
				fa[i].y = fa[i-1].x / a[i];
			}
		}
		for (int i = 0; i < 5; ++i)
		{
			if (fa[i].y != 0)
			{
				printf("%d*%d", a[i],fa[i].y);
				if (fa[i].x != 0)	printf("+");
			}			
		}
		printf("\n");
	}
}