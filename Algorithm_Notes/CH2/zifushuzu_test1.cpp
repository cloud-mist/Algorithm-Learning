#include <cstdio>
int main(){
	char str[15] = "good story!"; //直接赋值字符串 来初始化
	//or  char str[15] = {'g', 'o', 'o', 'd', '', 's', 't', 'o', 'r', 'y', '!'};
	for (int i = 0; i < 11; i++) {
		printf("%c", str[i]);
	}
	return 0;
}
