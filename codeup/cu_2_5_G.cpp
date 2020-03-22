//fibonacci 前20项输出
#include <cstdio>
int F(int n){
	if (n == 0 || n ==1) return 1;
	else return F(n-1)+F(n-2);
}
int main(){
	int a[20];
	for (int i = 0; i < 20; ++i)
	{
		printf("%d\n",F(i));
	}
	return 0;
}
