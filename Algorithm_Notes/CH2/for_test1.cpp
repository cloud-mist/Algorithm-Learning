#include <cstdio>
int main(){
	int i, sum = 0;
	for (i = 1;i <= 100; i++) {
		sum += i;
	}
	printf("sum = %d", sum);
	return 0;
}
//for 里面三个条件隔开用 分号
