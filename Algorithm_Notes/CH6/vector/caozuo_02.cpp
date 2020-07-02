//insert(it,x)  向任意迭代器it处插入一个元素x，时间复杂度O(n) 
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
	vi.insert(vi.begin()+2, -1);	//vi[2] 插入一个-1
	for (int i = 0; i < vi.size(); ++i)
	{
		printf("%d ", vi[i]);		// 1 2 -1 3 4 5
	}
	return 0;
}
