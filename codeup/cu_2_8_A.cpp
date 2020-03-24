#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
struct person {
    char name[20];
    int count;
}leader[3] = {{"Li", 0}, {"Zhang", 0},{"Fun", 0}};
int main(){
	int n;
	string list[60];
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		cin>> list[i] ;
	}

	for (int i = 0; i < n; ++i)
	{
	if (list[i] == "Li") leader[0].count++;
	else if(list[i] == "Zhang") leader[1].count++;
	else leader[2].count++;
	}

	for (int i = 0; i < 3; ++i)
	{
		printf("%s:%d\n",leader[i].name,leader[i].count);
	}
	return 0;
}