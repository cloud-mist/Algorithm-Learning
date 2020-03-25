#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
	int n,d;
	while(scanf("%d %d", &n, &d) != EOF)
	{
	
	char a[n];
	memset(a,0,sizeof(a));
	if (d == 0) break;
	
	int sum=0;
	for (int i = 0; i < d; ++i)
	{
		int start, over;
		scanf("%d %d", &start, &over);
		if (start > over)
		{
			swap(start,over);
		}
		for (int j = start; j <= over ; ++j)
		 {
		 	a[j] = -1;
		 } 
	}
	for (int i = 0; i <= n; ++i)
	{
		if (a[i] == 0)
		{
			sum++;
		}
	}
	
	printf("%d\n",sum);
}
	return 0;
}