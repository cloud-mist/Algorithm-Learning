#include <cstdio>
int main(){
	char str1[25] = "wo ai de ren bu ai wo";	//str1[25] 25个char字符组合。也称字符数组
	char str2[25] = "so sad a story it is.";
	printf("%s, %s", str1,str2);			//%s	 输出字符串
	return 0;
}
//不能把字符串常量 赋值给 字符变量	e.g. char c = "abc"  ×
