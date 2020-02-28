#include <cstdio>
char str[1][20];//即可以有两个字符数组 长度为19个字符
int main(){
		for(int i = 0;i < 2;i++){
				gets(str[i]);
		}
		for(int i = 0;i < 2;i++){
				puts(str[i]);
		}
		return 0;
}
