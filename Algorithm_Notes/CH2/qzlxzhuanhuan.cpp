#include <cstdio>
int main(){
	double r =  12.56;
	int a = 3, b = 5;
       	printf("%d\n",(int)r);			//12	
	printf("%d\n",a / b);			//0
	printf("%.1f", (double)a / (double)b);	//0.6	%.1f 保留一位小数
	return 0;	
}
