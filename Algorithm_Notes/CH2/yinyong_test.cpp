#include <cstdio>
void change(int &x){
	x = 1;
}
int main(){
	int a = 10;
	change(a);
	printf("%d", a);
	return 0;
}
