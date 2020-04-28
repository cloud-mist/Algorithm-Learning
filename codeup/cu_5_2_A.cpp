//没有考虑输入等于一的情况导致错误...
//最小公倍数的计算公式   a / gcd(a,b) * b
#include <cstdio>
int gcd(int a,int b){
	return !b ? a: gcd(b,a%b);
}
int main()
{	
	int m,n,a[1000];
	scanf("%d", &m);	
	while(m--){
		int temp, lcm;
		scanf("%d", &n);
		for (int i = 0; i < n; ++i)
			scanf("%d", &a[i]);
		if(n > 1){
			temp = gcd(a[0],a[1]);
			lcm = a[0] / temp * a[1];
			for (int i = 2; i < n; i++)
			{
				temp = gcd(lcm,a[i]);
				lcm = a[i] / temp * lcm;
			}
				printf("%d\n",lcm);
		}else{
			printf("%d\n",a[0]);
		}	
	}	
	return 0;
}	
