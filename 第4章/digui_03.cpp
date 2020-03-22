//求全排列
#include <cstdio>
const int maxn =11;
int n, p[maxn], hashtable[maxn] ={false};
void generateP(int index){
	if(index == n+1){
		for (int i = 1; i <= n; ++i)
		{
			printf("%d",p[i] );
		}
		printf("\n");
		return ;
	}
	for (int x=1; x<=n; ++x)
	{
		if (hashtable[x] == false)
		{
			p[index] = x;
			hashtable[x] = true;
			generateP(index +1);
			hashtable[x] = false;
		}
	}

}
int main(){
	n = 3;
	generateP(1);
	return 0;
}
