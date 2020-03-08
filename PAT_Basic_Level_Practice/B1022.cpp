#include <cstdio>
int main()
{
	
	int a,b,d,sum;
	scanf("%d%d%d",&a,&b,&d);
	sum = a+b;
	int ans[31], x= 0;
	do{
		ans[x] = sum % d;
		x++;
		sum = sum / d;


	}while(sum != 0);
	for (int i =x-1 ; i >=0; --i)
	{
		printf("%d",ans[i]);
	}



	return 0;
}

