#include <cstdio>
int search(int a[], int n, int x, int &i, int &j){
	int left = 0;
	int right = n -1;
	while(left <= right){
		int mid = (left + right) /2;
		if(x == a[mid]){
			i = j = mid;
			return mid;
		}
		if(x > a[mid]) left = mid + 1;
		if(x < a[mid]) right = mid - 1;
	}
	i = right;
	j = left;
	return -1;
}

int main(){
	int n, x;
	scanf("%d %d", &n, &x);
	int a[n];
	int i=0, j=0;
	for(int i = 0; i<n; i++){
		scanf("%d", &a[i]);
	}
	search(a, n, x, i, j);
	printf("%d %d", i, j);
}
