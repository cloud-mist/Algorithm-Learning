#include <cstdio>

int main()
{
	int q;
	while(~scanf("%d", &q) )
	{	
		int sum = 0;
		for (int i = 1; i <= q; ++i)
		{
			if ( (i % 7 != 0)  && (i / 10 != 7) && (i % 10 != 7) )
				sum += i * i;
		}
		printf("%d\n", sum);
	}
}
