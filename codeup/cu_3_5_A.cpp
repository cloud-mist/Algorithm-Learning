//进制转换
#include <cstdio>
int main()
{
	int m;
	long long a,b;
	while(~scanf("%d", &m))
	{
		if(m == 0)	break;
		
		scanf("%lld%lld",&a,&b);
		long long sum = a + b;
		int ans[35], num = 0;
		do{
			ans[num++] = sum % m;
			sum /= m;
		}while(sum != 0);
		for (int i =num -1; i >=0; --i)
			printf("%d", ans[i]);
		printf("\n");
		
	}
	return 0;
}
