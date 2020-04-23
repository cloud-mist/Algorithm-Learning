#include <cstdio>
int cmp(int n){
	if (n == 1)	return 1;
	else if (n == 2) return 2;
	else return cmp(n-1)+cmp(n-2);
}
int main(){
	int n;
	while(~scanf("%d", &n) )
	{
		printf("%d\n", cmp(n) );
	}
	return 0;
}