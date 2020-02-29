#include <cstdio>
#include <cstring>
int main(){
	int n;
	char str[100] = "123";
	sscanf(str,"%d", &n);
	printf("%d\n", n);
	return 0;
}
//把字符数组 以 %d的格式 写到n中
