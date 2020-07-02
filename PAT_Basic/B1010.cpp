#include<cstdio>
int main(){
	int a,b;
	int count = 0;
	while(scanf("%d%d",&a,&b) != EOF){
		if (a != 0 && b !=0){
			if(count != 0)	printf(" "); /*为什么不在第二个print
			后面 加空格 ，但是最后一个也不能有空格。 */ 
			printf("%d ",a*b);
			printf("%d",b-1);
			count++;	
		}
	}
	if (count == 0) printf("0 0");
	return 0;
}
//最后的两个数直接被忽略、因为求导完就是0 0 