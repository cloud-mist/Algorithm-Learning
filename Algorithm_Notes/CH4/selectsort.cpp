//简单选择排序
#include <iostream>
using namespace std;
const int size = 6;
#include<algorithm>
void selectSort(int a[], int n){
	
	for (int i = 0; i < n; ++i)		// 0～n-1 n趟排序
	{
		int j;
		int k = i;
		for (j = i; j < n; ++j)	// i ~ n-1 一一比较。最后元素最小的下标为 k
		{
			if (a[j] < a[k])
				k = j;
		}					//把最小的A[k],与A[i]交换

	/*	int tmp = a[i];
		a[i] = a[k];
		a[k] = tmp;
	*/
	swap(a[k],a[i]);	
	}


} 
int main(){
	int a[size] = {7,10,98,25,2,5};

	selectSort(a, size);
	for (int i = 0; i < size; ++i)
	{
		cout << a[i]<<" ";
	}
	return 0;

}
