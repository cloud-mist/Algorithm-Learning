#include <cstdio>
#include <algorithm>
using namespace std;
bool cmp(int x,int y)
{
	return x > y;
}
int main(){
	int m;
	int a[10][10];
	
	while(~scanf("%d", &m)){
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < m; ++j)
			scanf("%d", &a[i][j]);
	}
	int b[30] = {0};
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			b[i] +=  a[i][j];
			b[m+i] += a[j][i];
			if (i == j)
				b[2*m] += a[i][j];
		}	
		b[2*m+1] += a[i][m-i-1];		
	}
	
	sort(b,b+2*m+2,cmp);
	
	for (int i = 0; i <= 2 * m + 1; ++i)
		printf("%d ", b[i]);
	printf("\n");
	}
}
