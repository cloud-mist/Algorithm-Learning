//push_back(x)	在尾部添加一个元素x,  O(1)	
//pop_back()	在尾部删除一个元素，  O(1)
//size()		返回元素个数，类型 无符号数。用%d一般没问题
//clear()		清空所有元素	O(n)  n=元素个数
#include <cstdio>
#include <vector>
using namespace std;
int main()
{
	vector<int> vi;
	//1.添加 1～5
	for (int i = 1; i <= 5 ; ++i)
	{
		vi.push_back(i);
	}
	//2.删除尾元素 5
	vi.pop_back();
	//3.遍历
	for (int i = 0; i < vi.size(); ++i)	
	{
		printf("%d ", vi[i]);  //警告建议 %lu
	}
	//4.vi.size   vi中元素个数
	printf("\n%d", vi.size());
	//5.clear() 清空所有元素	
	vi.clear();
	printf("\n%d", vi.size());

	return 0;
}
