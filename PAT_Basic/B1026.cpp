#include <cstdio>
int main(){

	int c1, c2;
	int a,b,c,j,p;

	scanf("%d%d",&c1,&c2);
	//通过后两位是否超过50，来四舍五入的效果 
 	if((c2-c1)%100 <50) p = (c2-c1)/100;
 	else p = (c2-c1)/100 +1;
	
	a = p / 3600;
	j = p % 3600;
	b = j / 60;
	c = j % 60;
	printf("%02d:%02d:%02d\n",a,b,c);
	//要占两位 %02d 与 %.2d 效果一样 
	return 0;
}
