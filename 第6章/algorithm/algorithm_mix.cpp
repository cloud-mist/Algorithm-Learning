//algorithm头文件常用函数
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	//1.max,min,abs(x) x必须是整数，浮点数用math下的fabs
	int x = -1, y = 2, z = 5;
	printf("%d %d\n", max( max(x,y), z), min( min(x,y), z) );
	printf("%d %d\n",abs(x), abs(y));	

	//2.swap(x,y) 交换x，y值
	swap(x, y);
	printf("x: %d,y: %d\n", x, y);

	//3.reverse(it,it2)	将数组指针[it,it2)内的元素反转. 对字符串一样
	int a[10] = {14,15,16,17,18,19,20};
	reverse(a,a+4); //将a[0]~a[3]进行反转
	for (int i = 0; i < 7; ++i)
    {
		printf("%d ", a[i]);
	}
	printf("\n");

	//4.fill()  将数组某一段区间赋为某个值
	fill(a,a+4,233);
	for (int i = 0; i < 7; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	//5.sort() 排序函数, 对char型数组排序默认字典序
	/* sort(首元素地址，尾元素地址的下一个地址，比较函数（非必填）)
	   第三项不填，默认递增排序 */
	sort(a,a+7);
	for (int i = 0; i < 7; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	char c[] = {'d','e','f','F'};
	sort(c,c+4);
	for (int i = 0; i < 4; ++i)
	{
		printf("%c", c[i]);
	}

	return 0;
}
