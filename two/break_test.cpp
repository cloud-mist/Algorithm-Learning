//练习break 在需要的场合直接退出循环 
//实现了 加到100的过程中 第一次超过2000时sum的值
#include <cstdio>
int main(){
	int n = 0, sum = 0;
	for (int i = 1;i<= 100;i++) {
		sum += i;
		if (sum >= 2000) break;
	}
	printf("sum = %d\n", sum);
	return 0;
}
