#include <cstdio>
int main(){
	int t;
	scanf("%d",&t);
	int p =0;
	while(t--){
		long long a,b,c,sum;
		scanf("%lld%lld%lld",&a,&b,&c);
		sum = a+b;
		bool flag;
		if(a>0 && b>0 && sum<0)	flag = true;
		else if(a< 0 && b<0 && sum >= 0) flag = false;
		else if(sum > c) flag = true;
		else flag = false;
	
		if (flag == true) printf("Case #%d: true\n",p++);
		else printf("Case #%d: false\n", p++);
	}
	return 0;
}

/* 1.溢出问题。分情况讨论
   2.用long long
   3.flag的使用
*/ 