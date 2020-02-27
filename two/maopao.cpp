#include <cstdio>
int main(){
	int a[10] = {3,5,1,2,4};
	for(int i = 1;i <= 4; i++){	//进行n-1 趟排序
		//第i躺 从a[0] 到  a[n-i-1]  都与下一个数比较  
		//每一趟都有一个位置正确 所以到n-i，但下表从0开始 所以要到n-i -1
		for(int j = 0;j < 5-i; j++){
			if(a[j]>a[j+1]){		//交换数
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(int i = 0; i<5; i++){
		printf("%d",a[i]);
	}
	return 0;	
}
