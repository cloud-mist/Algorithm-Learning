//计算两个日期的差值
#include <cstdio>
#include <algorithm>
using namespace std;
int  panduan(int year);
int month[13][2] = {{0,0},{31,31},{29,28},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};

int main()
{
	int time1,y1,m1,d1;
	int time2,y2,m2,d2;

	while(scanf("%d%d",&time1,&time2) != EOF)
	{
		//判断两个日期谁大谁小，转换
		if (time1 > time2)
			swap(time1,time2);
		//分离年月日
		y1 = time1 / 10000, m1 = time1 % 10000 / 100, d1 = time1 % 100;
		y2 = time2 / 10000, m2 = time2 % 10000 / 100, d2 = time2 % 100;
		int ans = 1;	//统计
		while(y1 < y2 || m1 < m2 || d1 < d2)
		{
			d1++;
			if (d1 == month[m1][panduan(y1)]+1)	//日期超当年当月的天数一  重置日，月+1
			{
				m1 += 1;
				d1 = 1;
			}
			if (m1 == 13)
			{
				y1 += 1;
				m1 =1;
			}
			ans++;
		}
	printf("%d\n", ans);
	}
	return 0;
}

//判断是闰年还是平年
int  panduan(int year)
{
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) return 0;
	else return 1;
}