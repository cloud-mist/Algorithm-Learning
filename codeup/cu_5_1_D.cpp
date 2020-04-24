#include <cstdio>
#include <algorithm>
using namespace std;

void int_to_arr(int n, int num[])
{
	for (int i = 0; i < 3; ++i)
	{
		num[i] = n % 10;
		n /= 10;
	}
}

int main()
{
	
	int a[3], b[3];
	for (int i = 100; i < 500 ; ++i)
	{
		for (int j = 100; j < 500; ++j)
		{
			int_to_arr(i, a);
			int_to_arr(j, b);
			if (i + j == 532 && a[0] == b[0] && a[0] == b[1] && a[1] == b[2])
			{
				printf("%d %d %d\n",a[2],a[1], a[0]);
			}
		}
	}
	return 0;
}