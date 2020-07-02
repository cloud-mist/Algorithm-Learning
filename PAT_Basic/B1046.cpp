#include <cstdio>
int main(){
		int n;
		int jia=0,yi=0;
		scanf("%d",&n);
		for(int i = 0;i<n;i++){
				int a,b,ah,bh;
				scanf("%d%d%d%d",&a,&ah,&b,&bh);
				int	sum = a + b;
				if(sum == ah  && sum != bh ){
								yi = yi+1;
				}else if(sum !=ah && sum == bh){
								jia = jia+1;
						}
		}	 

		printf("%d %d\n",jia,yi);
		return 0;
}
