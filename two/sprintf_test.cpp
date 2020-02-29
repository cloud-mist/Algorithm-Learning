#include <cstdio>
#include <cstring>
int main(){
	int n = 233;
	char str[100];
	sprintf(str,"%d", n);
	printf("%s", str);
	return 0;
}
// 把n 以%d的格式 写到str字符数组中
