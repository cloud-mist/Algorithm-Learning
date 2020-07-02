#include <cstdio>
int main(){
	long long a,b,t=0,p=0;
	int da, db;
	scanf("%lld%d%lld%d",&a,&da,&b,&db);
	while(a != 0){
		if((a%10) == da){
			t = 10*t +da;
			a = a/10;
		}else{
			a = a/10;
		}
	}
	while(b != 0){
		if((b%10) == db){
			p = 10*p +db;
			b = b/10;
		}else{
			b = b/10;
		}		
	}
	printf("%lld\n",t+p);
	return 0;
}
