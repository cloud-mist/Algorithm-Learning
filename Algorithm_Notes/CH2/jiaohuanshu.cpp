#include <cstdio>
int main(){
	int a = 3, b = 5;
	int temp = a;
	a = b;
	b = temp;
	printf("a = %d,\nb = %d", a, b);
	return 0;
}
//交换两个数 通过中间变量
