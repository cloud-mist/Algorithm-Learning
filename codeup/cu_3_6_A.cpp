//这道题一到手就很懵逼,完全不知道怎么做
//看此答案就是先计算各自字符串的长度,然后,把二一个个字符拼接到一后面
#include <cstdio>
int main()
{
	char a[100], b[100];
	while(~scanf("%s %s", a, b))
	{
		int len1=0,len2=0;
		while (a[len1] != '\0') len1++;
		while (b[len2] != '\0') len2++;
		for (int i = len1; i <= len1+len2 ; ++i)
			a[i] = b[i-len1];
		printf("%s\n", a);
	}
	return 0;

}
