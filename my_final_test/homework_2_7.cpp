#include <cstdio>
int computing(int n);
int count = 0;

int main(){
	int n;
	scanf("%d", &n);
	computing(n);
	printf("%d", count);

}

int computing(int n){
	if(n == 1)
		count++;
	for(int i = 2; i <= n; i++){
		if(n % i == 0)
			computing(n/i);
	}
	return count;
}

