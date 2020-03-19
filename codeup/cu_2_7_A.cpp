#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int a,b;	
	int *p = &a,*q = &b;
	scanf("%d%d",&a,&b);
    if(*p>*q) swap(*p, *q);
	printf("%d %d\n",*p, *q);

	return 0;
}
