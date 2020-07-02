#include <cstdio>
//1,声明一个二维数组 来存放每个月的天数。并且区分闰年和平年
int month[13][2] = {{0,0}, {31, 31}, {28, 29}, {31, 31}, {30, 30}, {31, 31}, 
{30, 30}, {31, 31}, {31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31}};
//2.判断闰年
bool isleap(int year){
	return (year %4 == 0 && year % 400 !=0) || (year % 400 == 0);
	//  ｜｜ 满足其中一个即为真
}
int main()
{
		int time1, y1, m1, d1;
		int time2, y2, m2, d2;
		while(scanf("%d%d",&time1,&time2) != EOF){
			if (time1 > time2)		//判断哪个日期大，然后交换，然后把小的放前面
			{
				int temp = time1;
				time1 = time2;
				time2 = temp;
			}
			//计算年月日
			y1 = time1 /10000,m1 = time1 %10000/100, d1 = time1 % 100;
			y2 = time2 /10000,m2 = time2 %10000/100, d2 = time2 % 100;

			int ans = 1;
			while(y1 < y2 || m1 < m2 || d1 < d2){

				d1++;
				if (d1 == month[m1][isleap(y1)]+1)
				{
					m1++;
					d1 = 1;
				}
				//满13个月 年加一，月重置为1
				if (m1 == 13)
				{
					y1++;
					m1 = 1;
				}
				ans++;

			}

			printf("%d\n", ans);
		}

	return 0;


 }
