#include <cstdio>
#include <algorithm>
using namespace std;

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
int main(){
	int n=10000;
	int cun[5];
	int i_2;
	int change;
	for (int i = 1000; i < n; ++i)
	{
		int_to_arr(i, cun);
		int i_2 = i * 9; 
		change = arr_to_int(cun);
		if (change == i_2)
			printf("%d\n", i);
	}
	return 0;
}