//直接插入排序
#include <iostream>
using namespace std;
const int size = 5;
void insertsort(int a[],int size);
void insertsort(int a[],int size)
{
	for (int i = 1; i < size; ++i)	// n-1趟排序，1～n-1
	{
		int temp = a[i], j = i;		//temp存放a[i] j从i开始枚举
		while(j > 0 && temp < a[j-1]) //只要temp小于前面的元素。就把钱一个元素给后移一位
		{
			a[j] = a[j-1];
			j--;		
		}
		a[j] = temp;		//插入位置为a[j]
	}

}

int main(){
	int p[size] = {9,15,23,28,10};
	insertsort(p,size);
	for (int i = 0; i < 5; ++i)
	{
		cout << p[i] << " ";
	}
	return 0;
}
