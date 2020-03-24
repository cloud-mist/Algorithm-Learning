//斐波那契 
#include <cstdio>
int f(int n);
int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n",f(n-1));
	return 0;

}
int f(int n){
	if (n == 0 || n == 1) return  1;
	else return f(n-1) + f(n-2);
}