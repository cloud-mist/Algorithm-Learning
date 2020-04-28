#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int c;
	while(~scanf("%d", &c)	){
	for(int t = 0;t< c;t++)
	{	int n,v;
		double w;
		double a[110] = {0};
		scanf("%d%d%lf", &n, &v, &w);
		for (int i = 0; i < n; ++i)
			scanf("%lf", &a[i]);
		sort(a,a+n);
		int now_v = v;
		double now_p = a[0];
		if (now_p > w)	printf("0 0.00\n");
		else
		{	for (int i = 1; i < n; ++i)
			{
				if ( (now_p + a[i])/2 <= w)	
				{
					now_p  = (now_p + a[i])/2;
					now_v += v;
				}else	break;
			}
			printf("%d %.2f\n",now_v, now_p/100);
		}
	}
}
	return 0;
}