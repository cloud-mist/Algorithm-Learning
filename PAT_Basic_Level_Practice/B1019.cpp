//数字黑洞问题
#include <cstdio>
#include <algorithm>
using namespace std;
bool cmp(int x,int y)
{
	return x > y;
}
void int_to_arr(int n, int num[])
{
	for (int i = 0; i < 4; ++i)
	{
		num[i] = n % 10;
		n /= 10;
	}
}
int arr_to_int(int num[])
{
	int sum = 0;
	for (int i = 0; i < 4; ++i)
		sum = sum*10 + num[i];
	return sum;
}
int main()
{
	int n,max_,min_;
	int num[5];
	scanf("%d", &n);
	while(1)
	{
		int_to_arr(n,num);
		sort(num, num+4);	//将数组元素从小到大排序
		min_ = arr_to_int(num); //得到最小值
		sort(num,num+4, cmp);
		max_ = arr_to_int(num);

		n = max_ - min_;
		printf("%04d - %04d = %04d\n",max_, min_, n );
		if ( n == 0 || n == 6174)	break;
	}

}