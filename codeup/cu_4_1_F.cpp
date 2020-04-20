#include <cstdio>
#include <algorithm>
using namespace std;
struct rat
{
	int x;
	char a[20];
}rats[110];
bool cmp(rat a,rat b)
{
	return a.x > b.x;
}
int main(){
	int n;
	while(~scanf("%d", &n))
	{
		for (int i = 0; i < n; ++i)
		{
			scanf("%d%s", &rats[i].x, &rats[i].a);
		}
	sort(rats, rats+n,cmp);
	for (int i = 0; i < n; ++i)
	{
		printf("%s\n",rats[i].a);
	}

	}

	return 0;
}