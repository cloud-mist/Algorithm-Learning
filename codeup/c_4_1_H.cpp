#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
bool cmp(int x, int y)
{
		return x > y;
}
int main()
{
		int a[10],b[10],c[10];
		while(~scanf("%d", &a[0])){
				for (int i = 1; i < 10; ++i)
				{
						scanf("%d", &a[i]);
				}
				int k = 0, l = 0;
				for (int i = 0; i < 10; ++i)
				{	
						if (a[i] % 2 == 1)
						{
								b[k] = a[i];
								k++;
						}else if (a[i] % 2 == 0)
						{
								c[l] = a[i];
								l++;
						}
				}
				sort(b, b+k,cmp);
				for (int i = 0; i < k; ++i)
				{
						printf("%d ",b[i]);
				}

				sort(c, c+l);
				for (int i = 0; i < l; ++i)
				{
						printf("%d ",c[i]);
				}
		}
		return 0;
}
