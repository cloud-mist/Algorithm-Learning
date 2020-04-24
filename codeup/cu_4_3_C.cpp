#include <cstdio>
int count;
int a[30];
int n;
void digui(int index, int sum)
{
	sum += a[index];
	if (sum == 40) count++;
	else if (sum < 40)
	{
		for (int i = index+1; i < n; ++i)
			digui(i,sum);	
	}
}
int main()
{
	while(~scanf("%d", &n))
	{
		count = 0;
		for (int i = 0; i < n; ++i)
			scanf("%d", &a[i]);
		for (int i = 0; i < n; ++i)
			digui(i,0);
		printf("%d\n", count);
	}
	return 0;
}