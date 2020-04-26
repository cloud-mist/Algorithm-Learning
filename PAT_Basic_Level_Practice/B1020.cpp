//贪心1.卖月饼使其最大化收益。就是先尽着单价高的卖
//ps:都要弄成double类型的
#include <cstdio>
#include <algorithm>
using namespace std;
struct mooncake 
{
	double kucun;		//库存
	double price;		//单价
	double sum_price;	//总售价
}cake[1010];
bool cmp(mooncake x, mooncake y)
{
	return x.price > y.price;
}

int main()
{	//输入部分
	int n;
	double d;
	scanf("%d%lf",&n,&d);
	for (int i = 0; i < n; ++i)
		scanf("%lf", &cake[i].kucun);
	for (int i = 0; i < n; ++i)
	{
		scanf("%lf", &cake[i].sum_price);
		cake[i].price = cake[i].sum_price / cake[i].kucun;
	}
	//按单价排序
	sort(cake, cake + n, cmp);
	//核心部分	
	double ans = 0;	
	for (int i = 0; i < n; ++i)
	{
		if (cake[i].kucun < d)
		{
			d -= cake[i].kucun;
			ans += cake[i].sum_price;
		}else{
			ans += cake[i].price * d;
			break;
		}
	}
	//输出
	printf("%.2f\n", ans);

}