#include <cstdio>
#include <cmath>
int main()
{
	int m, n;
	int x;
	scanf("%d", &m);
	while(m--)
	{
		scanf("%d", &n);
		int a[12] = {0};
		for (int i = 0; i < n+1; ++i)
		{
			scanf("%d", &a[i]);
		}
		scanf("%d", &x);
		int sum = 0;
		for (int i = 0; i < n + 1 ; ++i)
			sum += a[i] * pow(x,i);
		printf("%d\n", sum );
	}
	return 0;
}
