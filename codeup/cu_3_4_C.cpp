#include <cstdio>
int  panduan(int year);
int month[13][2] = {{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
int main()
{
	int year ,days;
	while(scanf("%d%d",&year,&days) != EOF)
	{	
		int m=1,d=0;
		for (int i = 0; i < days ; ++i)
		{
			d++;
			if (d == month[m][panduan(year)]+1)	//日期超当年当月的天数一  重置日，月+1
			{
				m += 1;
				d = 1;
			}
		}
		printf("%04d-%02d-%02d\n",year,m,d);
	}

}
//判断是闰年还是平年
int  panduan(int year)
	return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
