#include <cstdio>
const int maxn = 100010;
bool hashtable[maxn] = {false};
int main(){
	int n,m,x;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; ++i)	//把n里面的数遍历。 置为true
	{
		scanf("%d", &x);
		hashtable[x] = true;
	}
	for (int i = 0; i < m; ++i)	//在m里遍历如果x 为true 就证明出现过
	{
		scanf("%d", &x);
		if (hashtable[x] == true)
		{
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
// 把数字的值作为数组下标来用
//时间复杂度 n+m
/*
5 3 
8 3 7 6 2
7 4 2
YES
NO
YES
*/
