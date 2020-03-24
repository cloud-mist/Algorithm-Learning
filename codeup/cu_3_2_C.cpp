//懵逼,半懂状态
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
struct  student
{	
	char id[100];
	char name[100];
	char sex[50];
	int age;
}stu[1010];

int main(){
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n; ++i)
		{
			cin >> stu[i].id >> stu[i].name >> stu[i].sex >> stu[i].age;
		}
	
	int m;
	scanf("%d", &m);
	char search[4];
	while(m--)
	{
		int flag = 0;
		cin >> search;
		for (int i = 0; i < n; ++i)
		{
			if (strcmp(search,stu[i].id) == 0)
			{
				cout << stu[i].id << " "<< stu[i].name << " " << stu[i].sex << " " << stu[i].age << endl;
				flag =1;
				break;
			}
		}
		if (flag == 0)
		{
			cout <<"No Answer!"<< endl;
		}

	}
	}
	return 0;

}




