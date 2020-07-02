//辗转相除法 （欧几里得） 求解最大公约数
#include <cstdio>
int main(){
	int a,b;
	scanf("%d%d", &a,&b);
	while( a != b){
		if (a>b)	a -= b;
		else b -= a;
	}
	printf("%d\n", a);
	return 0;
}