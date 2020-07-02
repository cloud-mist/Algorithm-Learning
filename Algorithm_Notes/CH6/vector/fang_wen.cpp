#include <cstdio>
#include <vector>
using namespace std;
int main()
{
	vector<int> vi; //定义一个vector
	for (int i = 1; i <= 5; i++)
	{
		vi.push_back(i);	//在vi的末尾添加元素i
	}
	// vi.begin()   取vi的首元素地址，it指向它
	vector<int>::iterator it = vi.begin();
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", *(it + i)); //输出vi[i]
	}

	return 0;
}
