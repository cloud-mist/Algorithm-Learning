#include <cstdio>
#include <cmath>
int main()
{
	int m,n;
	scanf("%d", &m);
	while(m--)
	{
		scanf("%d", &n);
		if ( n % 2 == 1)	printf("0 0\n");
		else {
			if (n % 4 == 0){
				printf("%d %d\n", n/4, n/2);
			}else{
				printf("%d %d\n",n/4+1, n/2);
				  }	
			}
	}
	return 0;
}
