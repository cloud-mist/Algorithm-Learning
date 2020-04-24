#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
struct students
{
	char name[30];
	int ans;
	int num[20] = {0};
	int score = 0;
}stu[1010];
bool cmp(students x, students y)
{
	if (x.score != y.score)	return x.score > y.score;
	else return strcmp(x.name, y.name) < 0; 	//非递减字典序
}

int main()
{
	int n,m,g;
	while(~scanf("%d", &n) )
	{
		if(n == 0) break;
		scanf("%d%d", &m, &g);
		int qsn[m];
		for (int i = 0; i < m; ++i)
		{
			scanf("%d", &qsn[i]);
		}
		for (int i = 0; i < n; ++i)
		{
			scanf ("%s%d", stu[i].name, &stu[i].ans);
			for (int j = 0; j < stu[i].ans; ++j)
			{
				scanf("%d", &stu[i].num[j]);
				stu[i].score += qsn[stu[i].num[j]-1];	
			}
		}
		sort(stu, stu+n, cmp);
		int p=0;
		for (int i = 0; i < n; ++i)
		{
			if (stu[i].score >= g)
				p++;
		}
		printf("%d\n",p);
		for (int i = 0; i < n; ++i)
		{
			if (stu[i].score >= g)
			{
				printf("%s %d\n",stu[i].name,stu[i].score);
			}
		}
	}
	return 0;
}