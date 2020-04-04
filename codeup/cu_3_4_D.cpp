#include <cstdio>
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int m;
	scanf("%d",&m);
	for (int i = 0; i < m; ++i)
	{
		int y,m,d;
		scanf("%d%d%d",&y,&m,&d);
		d++;
		if (d == month[m]+1)
		{
			m +=1;
			d = 1;
		}
		if (m == 13)
		{
			y += 1;
			m = 1;
		}
		printf("%04d-%02d-%02d\n", y,m,d);
	}
	return 0;
}
