#include <cstdio>
int main(){
	int a[10] = {1,2,3,4,5,6};
	for (int i = 0; i <10; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
	return 0;
}
/*
result:
a[0] = 1
a[1] = 2
a[2] = 3
a[3] = 4
a[4] = 5
a[5] = 6
a[6] = 0
a[7] = 0
a[8] = 0
a[9] = 0
*/
