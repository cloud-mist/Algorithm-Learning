#include <cstdio>
int main(){
		int a[10] = {1,2,3,4,5,6,7,8,9,10};
		for(int* p = a;p< a+10;p++)
		{
				printf("%d ",*p);
		}
		return 0;
}
// 用指针的方式 来输出元素。 a存放的是第一个元素的地址。*p是取值 p为地址
