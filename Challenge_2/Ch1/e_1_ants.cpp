//问题： 蚂蚁问题

// 思想：两只蚂蚁遇见其实可以看作：两只蚂蚁正常走
// 


#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int L, n;
	scanf("%d %d", &L, &n);
	int x[n];
	int da,xiao;
	xiao = da = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &x[i]);
	}

	for(int i = 0; i < n; i++){
		da = max(max(L - x[i], x[i]), da);
	}

	for(int i = 0; i < n; i++){
		xiao = max(xiao, min(x[i], L-x[i]));
	}
	printf("min = %d\n", xiao);
	printf("max = %d", da);

}
