#include <cstdio>
#include <cstring>
int main(){
		char str1[50], str2[50];
		gets(str1);
		gets(str2);
		int cmp = strcmp(str1, str2); //两个字符串 比大小 按照字典序
		if(cmp < 0){
				printf("str1 < str2\n");
		}else if(cmp > 0){
				printf("str1 > str2\n");
		}else {	
				printf("str1 == str2\n");
		}
		return 0;

}
