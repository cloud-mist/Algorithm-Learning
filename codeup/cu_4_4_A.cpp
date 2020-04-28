//区间贪心 	
#include <cstdio>
#include <algorithm>
using namespace std;
struct telev
{
	int x,y;
}tv[110];
bool cmp(telev a, telev b)
{
	if (a.x != b.x)	return a.x > b.x;	//左端从大到小，左端相等，按右端从小到大
	else return a.y < b.y;
}
int main()
{
	int n;
	while(~scanf("%d", &n))
	{
		if (n == 0)	break;
		for (int i = 0; i < n; ++i)
			scanf("%d%d", &tv[i].x, &tv[i].y);
		sort(tv,tv+n,cmp);
	int ans = 1, lastX = tv[0].x;	//先选中第一个区间
		for (int i = 1; i < n; ++i)
		{
		if (tv[i].y <= lastX)	//从第二个开始遍历，
	//如果某个的右端点比上一个合适区间的左端点小或者等，那么区间加1，左端点置为这个的左端点。
			{
				lastX = tv[i].x;
				ans++;
			}	
		}
	printf("%d\n",ans);
	}
}