#include <cstdio>
int main(){
    int n, m;
    int count = 0;
    scanf("%d%d", &n, &m);
    int a[120];
    m = m % n;   //这样就修正了 m的错误

	for(int i = 0;i<n;i++){
	    scanf("%d",&a[i]);
	}
	for(int i = n-m;i<n;i++){
	    printf("%d",a[i]);
        count++;
        if(count < n)   printf(" ");        //最后不能有空格，所以需要判断
	}	
	for(int i = 0;i<n-m;i++){
		printf("%d",a[i]);
        count++;
        if(count < n)   printf(" ");
	}
	return 0;
}
//输出n-m 到 n。  在输出 0 -- n-m-1
