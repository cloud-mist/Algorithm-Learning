#include <cstdio>
int main(){
		int n,p;
		int A=0,B=0,C=0,D=0,E=0,b=0,d=0,b2=0;
		scanf("%d",&n);
		int a[n];
		for(int i = 0;i < n;i++){
				scanf("%d",&a[i]);

				p = a[i] % 5;
				if(p == 0 && a[i] % 2 == 0){
						A = A+a[i];
				}
				if(p == 1){
						b++;
						if(b % 2==1)	{B = B +a[i]; b2++;}
						else	{B = B-a[i]; b2++;}
				}
				if(p == 2){
						C++;
				}		
				if(p == 3){
						D=D+a[i];
						d++;
				}
				if(p == 4){
						if(a[i]>E){			
								E = a[i];

						}
				}

		}
		if(A==0)	printf("N ");
		else	printf("%d ",A);
		if(b2==0)	printf("N ");
		else	printf("%d ",B);
		if(C==0)	printf("N ");
		else	printf("%d ",C);
		if(D==0)	printf("N ");
		else	printf("%.1f ",(double)D /d);
		if(E==0)	printf("N");
		else	printf("%d",E);
							
		return 0;
}
