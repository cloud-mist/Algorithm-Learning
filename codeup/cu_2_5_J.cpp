//三个字符串 输出最大者
#include <cstdio>
#include <cstring>
const int size = 30;
int main(){
	char a[size], b[size], c[size];
	gets(a);
	gets(b);
	gets(c);
	int result1 = strcmp(a,b);
	int result = 0;
    if (result1 >= 0) {
    	result = strcmp(a,c);
    	if (result >= 0) printf("%s\n",a);
    	else printf("%s\n",c);
    }else{ result = strcmp(b,c);
    	  if (result >= 0) printf("%s\n",b);
    	else printf("%s\n",c);
    }
	return 0;
}
