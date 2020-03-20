#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

bool cmp(char a, char b){
	return a < b;
}
int main(){
	char c[200];
	while(gets(c) ){		//不知道怎么写，测试多组字符串
	sort(c, c+strlen(c),cmp);
	printf("%s\n",c);
	/*for (int i = 0; i < strlen(c); ++i)	//没必要这样写
	{
		printf("%c",c[i]);
	}*/
}
	return 0;
}
