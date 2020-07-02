//由3部分组成 。第一行和最后一行 是n个某种字符c
//第二行--倒数第二行 是开始一个 结尾一个，中间是空
//我的错误是 第6行，没有用空格 所以第二个字符读取了空格
#include <cstdio>
int main()
{
	int x,y;	//	x是列，y是行
	char c;
	scanf("%d %c",&x, &c);
	if(x%2 == 0) 	y = x/2;
	else y = x/2 +1;
	for(int i=1;i<=x;i++){
		printf("%c",c);
	}
	printf("\n");
	for(int i=1;i<=(y-2);i++){
		printf("%c",c);

		for(int k = 1;k <=(x-2);k++){
			printf(" ");
		}
		printf("%c\n",c);	
	}
	for(int i=1;i<=x;i++){
		printf("%c",c);
    }
    return 0;
 }
