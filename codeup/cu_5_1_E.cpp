//找众数
#include <cstdio>	
int main(){
	int a[25];
	while(~scanf("%d", &a[0]) )
	{	
		int b[15]={0};
		b[a[0]]++;
		for (int i = 1; i < 20; ++i)
		{
			scanf("%d", &a[i]);
			b[a[i]]++;
		}
		int num = 0;
		for (int i = 1; i <= 10; ++i)
		{
			if (b[i] > b[num])	//这我还是不太明白自己为什么错了，要写成这个才对		
				num = i;		//因为是从小到大便利  所以不需要讨论-
								//-如果频数相等，找小的。本来就是小的，
								//但还是不明白为什么自己分情况讨论·是错的
		}
		printf("%d\n", num);
	}
	return 0;
}