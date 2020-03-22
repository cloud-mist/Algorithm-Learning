#include <cstdio>
#include <cstring>
const int size = 30;
int sum = 0;
int bijiao(char a[], char b[], int min);
int main(){
	char a[size],b[size];
	gets(a);
	gets(b);
	int min = strlen(a) > strlen(b)?strlen(b):strlen(a);
	bijiao(a,b,min);
	printf("%d\n", sum);
	return 0;
}
int bijiao(char a[], char b[],int min){
	for (int i = 0; i <min ; ++i)
	{
		int temp = a[i]-b[i];
		sum += temp;
	}
	return sum;
}
