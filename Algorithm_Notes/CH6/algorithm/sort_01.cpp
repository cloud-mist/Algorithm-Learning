#include <cstdio>
#include <algorithm>
using namespace std;
//不带比较函数的sort默认是从小到大。设置cmp函数 达到从大到小的排序
//对double型数组，char型相似
bool cmp(int a, int b){
	return a > b;
}
int main(){
	int a[5] = {3,1,4,2};
	sort(a,a+4);
	printf("before add cmp: ");
	for (int i = 0; i < 4; ++i)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	sort(a,a+4,cmp);
	printf("after add cmp: ");
	for (int i = 0; i < 4; ++i)
	{
		printf("%d ",a[i]);
	}
	return 0;

}
