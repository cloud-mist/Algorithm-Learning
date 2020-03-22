//反转一个数组。
#include <cstdio>
#include <algorithm>
void fanzhuan(int a[], int size);
using namespace std;
int main(){
    int a[10];
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d",&a[i]);
    }
    fanzhuan(a,sizeof(a)/sizeof(a[0]));
    //或者直接用这个 reverse(a,a+sizeof(a)/sizeof(a[0]));
	for (int i = 0; i < 10; ++i)
    {
        printf("%d\n",a[i]);
    }   
 
 
}
void fanzhuan(int a[], int size){
    for (int i = 0; i < size; ++i)
    {
        swap(a[i],a[size-1]);
        size--;
    }
}
