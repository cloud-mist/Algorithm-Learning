// fibonacci
#include <cstdio>
#define MAXN 100
int F(int n);
int dp[MAXN];

int main(){
	int n;


	while (~scanf("%d", &n)) {
	    	
	    for(int i = 0; i <= MAXN; i++){
		    dp[i] = -1;
	    }
		printf("%d\n", F(n-1));
	}
}

int F(int n){
	if(n == 0 || n == 1)	return 1;
	if(dp[n] != -1)		 return dp[n];
	else {
		dp[n] = F(n-1) + F(n-2);
		return dp[n];
	}
}

