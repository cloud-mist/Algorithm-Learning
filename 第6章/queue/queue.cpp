//queue  先进先出
#include <cstdio>
#include <queue>
using namespace std;
int main(int argc, char const *argv[])
{
	queue<int> q; //1.定义一个队列
	for (int i = 1; i <= 5; ++i)
	{
		q.push(i);  
		//2.push(i)  将i压入队列
	}

	//3.front & back  分别访问队首元素 队尾元素
	printf("%d %d\n",q.front(), q.back() );
	
	//4.pop() 队首元素出队 O(1)
	for (int i = 1; i <=3; ++i)
	{
		q.pop();	//出队1，2，3
	}
	printf("%d\n", q.front() );
	
	//5.empty() 检测是否为空 ，true空  false非空 。 O(1)
	queue <int> q2;
	if (q2.empty() == true)
	{
		printf("empty\n");
	}else{
		printf("not empty.\n");
	}
	q2.push(1);
	if (q2.empty() == true)
	{
		printf("empty\n");
	}else{
		printf("not empty.\n");
	}

	//6.size()   返回元素个数 O(1)
	printf("%d\n", q2.size() );
	return 0;
}