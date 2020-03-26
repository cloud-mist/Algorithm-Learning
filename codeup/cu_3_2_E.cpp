//注意这里的多组测试,已经指明有机组了,所以直接用for
#include <cstdio>
struct student
{
		int id;
		char name[20];
		char sex[20];
		int age;
}stu[50];
int main()
{
		int m,n;
		scanf("%d",&m);
		for (int j = 0; j < m; ++j)
		{	
			    scanf("%d",&n);
				for (int i = 0; i < n; ++i)
				{
						scanf("%d %s %s %d",&stu[i].id, &stu[i].name,&stu[i].sex,&stu[i].age);
				}
				int c;
				scanf("%d", &c);
				for (int i = 0; i < n; ++i)
				{
						if (stu[i].id == c)
						{
								printf("%d %s %s %d\n",stu[i].id, stu[i].name,stu[i].sex,stu[i].age);
								break;  //不用在搞了,都已经找到直接跳出
						}
				}
		}
		return 0;



}
