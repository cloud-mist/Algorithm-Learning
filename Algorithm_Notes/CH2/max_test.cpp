#include <cstdio>
int MAX(int a, int b, int c){
		int m;
		m = a > b ? a : b;
		m = m > c ? m : c;
		return m;
}

int main(){
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		printf("%d\n",MAX(a,b,c));
		return 0;

}
//输入三个整数。输出最大值
