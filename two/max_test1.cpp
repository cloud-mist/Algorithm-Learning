#include <cstdio>
int max(int a, int b){
		int m;
		m = a > b ? a : b;
		return m;
}
int main(){
		int a , b, c;
		scanf("%d%d%d", &a, &b, &c);
		printf("%d",max(max(a,b),max(a,c)));
		return 0;
}
