#include <cstdio>
bool  panduan(int year);
int month[13][2] = {{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
int main()
{
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; ++i)
    {
        int year ,days;
        int m,d;
        scanf("%d%d%d%d", &year, &m, &d, &days);
 
        for (int k = 0; k < days ; ++k)
        {
            d++;
            if (d == month[m][panduan(year)]+1) //日期超当年当月的天数一  重置日，月+1
            {
                m += 1;
                d = 1;
            }
            if (m == 13)
            {
                year += 1;
                m =1;
            }
        }
        printf("%04d-%02d-%02d\n",year,m,d);
    }
 
}
//判断是闰年还是平年
bool  panduan(int year)
{   
    return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}
