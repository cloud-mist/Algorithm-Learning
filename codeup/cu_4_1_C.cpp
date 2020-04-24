/*教训：
1.strcmp 比较字符串大小
2.用switch来搞分类。

3.没看清边界大小，少个0导致过不去。
4.scanf的括号也粗心搞错了
*/
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;                                                             
struct students
{
	char a[10];
	char b[10];
	int c;
}stu[100010];

bool cmp1(students x,students y)
{	
	return strcmp(x.a,y.a) < 0;
}
bool cmp2(students x,students y)	
	{
		if (strcmp(x.b,y.b) ) return strcmp(x.b,y.b)<0;			
		else return strcmp(x.a,y.a) < 0;
	}
bool cmp3(students x,students y)
	{
		if (x.c != y.c) return x.c < y.c;			
		else return strcmp(x.a,y.a) < 0;
	}


int main()
{
	int n,m;
	int num=1;
	while(~scanf("%d%d", &n, &m))
	{
		if (n == 0) break;
		for (int i = 0; i < n; ++i)
		{
			scanf("%s%s%d", stu[i].a, stu[i].b, &stu[i].c);
		}
	
		switch(m){
			case 1:sort(stu,stu+n, cmp1); break;
			case 2:sort(stu,stu+n, cmp2); break;
			case 3:sort(stu,stu+n, cmp3); break;
		}
		
		printf("Case %d:\n",num);
		++num;
		for (int i = 0; i < n; ++i)
		{
			printf("%s %s %d\n", stu[i].a,stu[i].b,stu[i].c);
		}
	}	
	return 0;
}