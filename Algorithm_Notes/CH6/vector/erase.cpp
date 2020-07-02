//1.erase(it)  删除it处的元素。时间复杂度O(n)
//2.erase(first.last)  ,删除 [first.last) 内的元素 
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
	vi.erase(vi.begin()+3);	//删除vi[3]==4  
	for (int i = 0; i < vi.size(); ++i)
	{
		printf("%d ", vi[i]);	// 还剩1 2 3 5
	}
	printf("\n");
	vi.erase(vi.begin()+1,vi.begin()+3); //删除vi[1] ~ vi[3]，但不包括vi[3]i
										//即删除vi[1]  vi[2]
	for (int i = 0; i < vi.size(); ++i)
	{
		printf("%d ", vi[i]);	//1,5
	}
}
