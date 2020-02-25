//自增运算符  i++和++i
#include <cstdio>
int main(){
	int a = 1, b = 1, n1, n2;
	n1 = a++;		// n1 = a , a = a+1; 先赋值，后自加
	n2 = ++b;		// b = b+1, n2 = b;  先自加，后赋值
	printf("%d %d\n",a,n1);	
	printf("%d %d\n",b,n2);
	return 0;
}
