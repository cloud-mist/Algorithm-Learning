#include <cstdio>

int main(){
	int n, a[1010];
	while(scanf("%d", &n) != EOF)
	{
		int b[5]={0};
		int suma2=0,suma4=0,zhen=0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &a[i]);
		}
		for (int i = 0; i < n; ++i)
		{
			int yu = a[i] % 5;
			if (yu == 0){
				if ((a[i]%2) == 0)
				{
					b[0] += a[i];
				}
			}else if(yu == 1){		//因为有正负,所以重新搞一个标志确认是否为0.坑
				suma2++;
				if (suma2 % 2 == 1)
				{
					b[1] += a[i];
					zhen ++;
				}else{
					b[1] -= a[i];
					zhen ++;
				}
				
			}else if(yu == 2)
				b[2]++;
			else if(yu == 3){
				suma4++;
				b[3] += a[i];
			}else{
				if (a[i] > b[4])
					b[4] = a[i];
			}	

		}

		if (b[0] == 0) printf("N ");
		else printf("%d ", b[0]);
		if (zhen == 0) printf("N ");
		else printf("%d ", b[1]);
		if (b[2] == 0) printf("N ");
		else printf("%d ", b[2]);
		if (b[3] == 0) printf("N ");
		else{
			double q= double(b[3]) / double(suma4);
			printf("%.1f ", q);
		}
		if (b[4] == 0) printf("N");
		else printf("%d", b[4]);
	
		printf("\n");
	}
	
	return 0;
}
