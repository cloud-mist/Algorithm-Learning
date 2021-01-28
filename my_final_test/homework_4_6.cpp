// 加油问题，应该在哪些加油站加油

#include <cstdio>
#include <cstring>

int main(){
	int m, n;		// 一次加满行驶距离&加油站的个数
	scanf("%d %d", &m, &n);
	int a[n+1], r[n+1];
	memset(r, 0, sizeof(r));
	for(int i = 0; i <= n; i++){
		scanf("%d", &a[i]);
	}

	int sum = 0;
	for(int i = 0; i <= n; i++){
		if((sum + a[i]) <= m){
			sum += a[i];
		}else{
			r[i] = 1;
			sum = a[i];
		}
	}
	for(int i = 0; i<= n; i++){
		if(r[i] == 1){
		printf("%d ", i);
		}

	}
	return 0;
}

