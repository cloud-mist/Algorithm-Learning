//分数表示运算输出
//分数化简
#include <cstdio>
#include <algorithm>
using namespace std;
struct Fraction
{
	int up,down;
}fenshu[3];
int gcd(int a,int b);
Fraction reduction(Fraction result);
Fraction add(Fraction f1,Fraction f2);
Fraction minu(Fraction f1,Fraction f2);
Fraction multi(Fraction f1,Fraction f2);
Fraction divide(Fraction f1,Fraction f2);
void showresult(Fraction r);
int gcd(int a,int b)
{
	if(b == 0)	return a;
	else return  gcd(b, a % b);
}
//分数化简
Fraction reduction(Fraction result)
{
	if (result.down < 0)
	{
		result.up = -result.up;
		result.down = -result.down;
	}
	if (result.up == 0)
	{
		result.down = 1;
	}else{
		int d = gcd(abs(result.up), abs(result.down));
		result.up /= d;
		result.down /= d;
	}
	return result;
}
// 分数的四个运算
Fraction add(Fraction f1,Fraction f2)
{
	Fraction result;
	result.up = f1.up * f2.down + f2.up * f1.down;
	result.down = f1.down * f2.down;
	return reduction(result);
}

Fraction minu(Fraction f1,Fraction f2)
{
	Fraction result;
	result.up = f1.up * f2.down - f2.up * f1.down;
	result.down = f1.down * f2.down;
	return reduction(result);
}

Fraction multi(Fraction f1,Fraction f2)
{
	Fraction result;
	result.up = f1.up * f2.up;
	result.down = f1.down * f2.down;
	return reduction(result);
}

Fraction divide(Fraction f1, Fraction f2)
{
	Fraction result;
	result.up = f1.up * f2.down;
	result.down = f1.down * f2.up;
	return reduction(result);
}
void showresult(Fraction r)
{
	r = reduction(r);
	if(r.down == 1)	printf("%lld\n", r.up);
	else if (abs(r.up) > r.down)
	{
		printf("%d-%d/%d\n",r.up/ r.down , abs(r.up) % r.down, r.down);
	}else{
		printf("%d/%d\n", r.up, r.down);
	}
}
int main()
{
	fenshu[0] = {1,2};
	fenshu[1] = {3,4};
	fenshu[2] = add(fenshu[0], fenshu[1]);
	showresult(fenshu[2]);
}










