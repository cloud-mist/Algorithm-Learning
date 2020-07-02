#include <cstdio>
int main(){
	int a[10];
	scanf("%d", &a[0]);
	for (int i = 1; i < 10; i++) {
		a[i] = a[i-1] * 2;	
	}
	for (int i = 0; i < 10; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
	return 0;
}
//递推 。 实现数组十个数每个都是前一个数的二倍
