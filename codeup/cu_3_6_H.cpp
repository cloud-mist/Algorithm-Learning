#include <cstdio>
#include <cstring>
int main()
{
	int n;
	char str[110][30];
	while(~scanf("%d", &n))
	{
		for (int i = 0; i < n; ++i)
		{
			scanf("%s",str[i]);
			for (int k = i; i-k+1 <= 4 && k>= 0; --k)
			{	
				printf("%d=%s",i-k+1,str[k]);
				if (k != 0)
					printf(" ");	
			}
			printf("\n");
		}
	}
		
}