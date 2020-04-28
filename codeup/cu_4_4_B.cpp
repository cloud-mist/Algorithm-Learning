#include <cstdio>
double cost(int n)
{
	double ans = 0;
	if(n == 0)	ans = 0;
	if(n > 0 && n <= 4) ans = 10;
	if(n > 4 && n <= 8)	ans = 10 + (n-4) * 2;
	if(n > 8 && n <= 13) ans = 18 + (n - 8) * 2.4;
	if(n > 13)
	{	
		if ( n % 8 == 1 || n % 8 == 2 || n % 8 == 3 || n % 8 == 4 || n % 8 == 5 )
		{
			int p = n % 8 + 8;
			n = n / 8 - 1;
			ans = 18 * n + cost(p);
		}else{
			int p = n % 8 ;
			n = n / 8;
			ans = 18 * n + cost(p);		
		}
	}
	return ans;
}
int main()
{
	int  n;
	while( ~scanf("%d", &n) )
	{
		if(n == 0)	break;
		double fee = cost(n);
		if(fee==(int)fee)	printf("%d\n",(int)fee);
		else printf("%.1f\n",fee);
	}
}