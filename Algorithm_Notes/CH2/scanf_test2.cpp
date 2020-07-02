//scanf 的%c  可以读入空格和换行
#include <cstdio>
int main(){
	int a;
	char c, str[10];
	scanf("%d%c%s",&a, &c, str);
	printf("a=%d,c=%c,str=%s",a, c, str);
	return 0;
}
