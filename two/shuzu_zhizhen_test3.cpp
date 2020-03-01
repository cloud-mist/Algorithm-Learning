#include <cstdio>
int main(){
	int a[10] = {1, 4, 9, 16, 25, 35};
	int* p = a;
	int* q = &a[6];
	printf("p = %d\n", p);
	printf("q = %d\n", q);
	printf("q-p = %d\n", q-p);
	return 0;
}
// q-p=24 但是用指针-的话 是相差6个int 所以是6
