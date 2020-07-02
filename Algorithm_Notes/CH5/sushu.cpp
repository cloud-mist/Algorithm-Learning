//埃拉特斯托尼筛法   求解是不是素数
//运用i<sqrt(a)比 i<a 缩少了一半时间。因为如果不是素数，可定存在p和q的乘积为它。而p或者q最大为a开平方
#include <cstdio>
#include<cmath>
int main(){
	int a;
	int flag;
	scanf("%d", &a);
	for (int i = 2; i < sqrt(a); ++i)
	{
		flag = 0;
		if (a % i == 0)
		{
			printf("%d isnot sushu\n", a);
			break;		
		}else{
			flag =1;
		}
		
	}
	if (flag == 1)
	{
		printf("%d is sushu\n", a);
	}
	return 0;
}