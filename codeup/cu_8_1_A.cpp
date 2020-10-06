// 题目：给出n的全排列，并且按字典序排好。

// 思维：

// 方案
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int n, a[n];
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		a[i] = i+1;
	}
	do{
		for(int i = 0; i < n; i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}while(next_permutation(a, a+n));	
	return  0;
}
