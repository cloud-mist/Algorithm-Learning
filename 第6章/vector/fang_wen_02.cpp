//用迭代器遍历
#include <cstdio>
#include <vector>
using namespace std;
int main()
{
	vector<int> vi; //定义一个vector
	for (int i = 1; i <= 5; ++i)
	{
		vi.push_back(i);	//在vi的末尾添加元素i
	}
	// vector 不支持 it< vi.end()这种写法
	
	for (vector<int>::iterator it = vi.begin(); it != vi.end(); ++it)
	{
		printf("%d ", *it);
	}

	return 0;
}
