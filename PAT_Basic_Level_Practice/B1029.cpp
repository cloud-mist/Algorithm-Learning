#include <cstdio>
#include <cstring>
int main(){
	char str1[100],str2[100];
	bool hashtable[128] ={false};
	scanf("%s",str1);
	scanf("%s",str2);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
//用两个循环枚举。上面枚举一个，和下面的所有比对。如果 一
	for (int i = 0; i < len1; ++i)
	{
		int j;
		char c1,c2;
		for(j=0;j < len2; j++){
			c1 = str1[i];
			c2 = str2[j];
			//把小些字母转换为大写字母
			if (c1 >= 'a' && c1 <= 'z') c1 -= 32;
			if (c2 >= 'a' && c2 <= 'z') c2 -= 32;
			if(c1 == c2) break;//一 有就跳出，继续下一个
		}
		
		if (j== len2 && hashtable[c1] == false) //未出现
		{
			printf("%c", c1);//输出并且把它置为true，证明输出过，无需重复
			hashtable[c1] =true;
		}
	}
	return 0;
}