//把英文字母调换
#include <cstdio>
#include <cstring>
int main(){
	char a[30];
	gets(a);
	for (int i = 0; i < strlen(a); ++i)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			a[i] =155 - a[i];
		}else if(a[i] >= 'a' && a[i] <= 'z'){
			a[i] = 219 - a[i];
		}		
	}
	printf("%s\n", a);
	return 0;
}