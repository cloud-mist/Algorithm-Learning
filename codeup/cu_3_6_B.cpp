//词首定是空格之类的,所以将其置为0,那么下一个即是开头字母,然后哦进行转换
#include <cstring>
#include <cstdio>
void change(char a[]);
int main(){
	char a[110];
	while(gets(a)){
		change(a);
		printf("%s\n", a);
	}
}
void change(char a[])
{
		int flag=0;
		for (int i = 0; i < strlen(a); ++i)
		{
			if (a[i] ==' ' || a[i]== '\t' || a[i]== '\r' || a[i] == '\n')
			{
				flag =0;
			}else{
				if (flag == 0&& a[i]>='a' && a[i] <= 'z')
				{
					a[i] -= 32;
				}
				flag = 1;
			}
		}
}
