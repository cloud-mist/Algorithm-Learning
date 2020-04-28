//最大公约数		gcd函数
//欧几里得算法（辗转相除法）
#include <cstdio>
int gcd(int a,int b){
	return !b ? a: gcd(b,a%b);
}
int main(){	
	int n,m;
	while(~scanf("%d%d", &n, &m))
		printf("%d\n",  gcd(n,m));
	return 0;
}