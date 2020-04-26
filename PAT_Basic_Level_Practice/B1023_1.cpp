/*1.我自己的思路：  
	先把这些数字存入一个数组，按从小到大排序
	如果没0，那就是最小
	如果有0，把第一个非零数字和第一个0交换即为最小

 *2.书上思路：
	先找到一个非0数字输出，然后再按从小到大输出数字
*/
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int a[10], b[60];
	int ans = 0, p = 0;
	for (int i = 0; i < 10; ++i)
	{	
		scanf("%d",&a[i]);
		ans += a[i];
		if (a[i] != 0)
		{
			for (int j = 0; j < a[i]; ++j)
				{
					b[p] = i;
					p++;
				}	
		}
	}
	sort(b,b+ans);
	if (a[0] != 0)	swap(b[0],b[a[0]]);
	for (int i = 0; i < ans; ++i)
			printf("%d",b[i]);
	printf("\n");
}
