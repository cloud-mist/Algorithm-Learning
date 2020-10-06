#include <cstdio>
int main(){
	int n, r;
	scanf("%d %d", &n, &r);
	for(int i = 1; i <= 3; i++){
		for(int j = 2; j <= 4; j++){
			for(int k = 3; k <= 5; k++){
				printf("%d %d %d\n",i,j,k);
			}
		}
	}
	return  0;
}
