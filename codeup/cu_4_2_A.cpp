#include <cstdio>
int main()
{
	int n,m;
	int a[220];
	while(~scanf("%d%d", &n, &m))
	{	
		int b[220]={0};
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &a[i]);
			b[a[i]]++;
		}
		for (int i = 0; i < n; ++i)
		{
			if (b[a[i]]-1 <= 0 ) printf("BeiJu\n");
			else printf("%d\n", b[a[i]]-1 );
		}
	}
	return 0;
}