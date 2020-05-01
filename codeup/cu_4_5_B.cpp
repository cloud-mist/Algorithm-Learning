#include <cstdio>
#include <iostream>

int main()
{
	int m;
	while(~scanf("%d", &m) ){
	while(m--)
	{
		int a[1000],b[1000] = {0},n;
		int k = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; ++i)
			scanf("%d", &a[i]);
		if (n == 0)	k=-1;
		else if (n ==1)	b[0] = 0;
		else if(n == 2) {
			if(a[0] != a[1]){
				b[0] = 0;	
				b[1] = 1;
			}else{ k = -1;}
		}else{	
			b[0] = 0;	
			k = 1;
			for (int i = 1; i < n-1; ++i)
			{
				if ((a[i] > a[i-1] && a[i] > a[i+1]) || (a[i] < a[i-1] && a[i] < a[i+1]) )
				{
					b[k] = i;
					k++;
				}
			}
			b[k] = n-1;
		}
		if (k == -1)	std::cout << std::endl;
		else{
			for (int i = 0; i <= k; ++i){
				printf("%d",b[i]);
				if (i != k)	printf(" ");}
			}
		if(k != -1)	printf("\n");
	}
	}

}