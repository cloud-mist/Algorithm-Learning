#include <cstdio>
#include <algorithm>
using namespace std;
int  int_to_arr(int n, int num[])
{
	int i = 0;
	while(n != 0)
	{
		num[i] = n % 10;
		n /= 10;
		i++;
	}
	return i;
}
int main()
{
	int n, n2;
	
	while(~scanf("%d", &n) )
	{
		int p[5] , p2[5] ;
		int len = int_to_arr(n,p);
		n2 = n * n;
		int_to_arr(n2,p2);
		int index = 0;
		for (int i = 0; i < len ; ++i)
		{	

			if (p[i] != p2[i])
			{
				index = 0;
				break;
			}else {
				index = 1;
			}
		}
		if (index == 0)	printf("No!\n");
		else printf("Yes!\n");
	}
}