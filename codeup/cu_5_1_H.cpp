#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	int a[1000];
	while(~scanf("%d", &n) )
	{
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &a[i]);
			int sum = 0;
			if (a[i] >= 0)
			{
				for (int j = a[i]; j <= 2 * a[i] ; ++j)
				{
					sum += j;
				}
				printf("%d\n",sum);
			}else {
				for (int j = a[i] * 2; j <=  a[i] ; ++j)
				{
					sum += j;
				}
				printf("%d\n",sum);
			}
		}

	}
}