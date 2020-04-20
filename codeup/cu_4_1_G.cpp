#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int n, a[10010];
	while(~scanf("%d", &n))
	{
		if (n==0)	break;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &a[i]);
		}
		sort(a,a+n);
		int c = 0;
		if (n % 2 ==1)
		{
			printf("%d\n",a[n/2]);
		}else if(n % 2== 0){
			c = (a[n/2]+a[n/2-1]) / 2;
			printf("%d\n", c);
		} 
	}
	return 0;
}