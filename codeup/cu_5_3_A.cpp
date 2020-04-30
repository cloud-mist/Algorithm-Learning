#include <cstdio>
int main()
{
	int n;
	while(~scanf("%d", &n) )
	{
		double sum = 0;
		if (n == 0)	break;
		if (n ==1) 	sum = 1;
		else {
			sum = n;
			for (int i = 1; i < n; ++i)
				sum += 2 * (double(n) - i) / (i+1);		
		}
		printf("%.2lf\n", sum);
	}
}


