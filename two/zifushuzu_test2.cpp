//gets  puts
#include <cstdio>
int main(){
	char str1[20];
	char str2[5][10];
	gets(str1); //储存第一个字符数组
	for (int i= 0; i < 3; i++) {
		gets(str2[i]);
	}
	//通过循环储存234.str2[0],str2[1],str2[2],
	puts(str1);
	for (int i= 0; i < 3; i++) {
		puts(str2[i]);
	}
	return 0;
}
