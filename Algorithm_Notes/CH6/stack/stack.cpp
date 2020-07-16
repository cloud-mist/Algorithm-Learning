/*
用途:模拟实现一些递归。
	 防止程序对栈内存的限制而导致运行出错
*/

#include <cstdio>
#include <stack>
using namespace std;

int main(){
	stack<int> st;

	//1.empty() 判断栈空 	O(1)
	if (st.empty() == true)	printf("empty!\n");
	else printf("not empty\n");			// empty!

	//2.push() 0-5压入栈 	O(1)
	for (int i = 0; i <= 5; ++i)
		st.push(i);
	printf("%d\n", st.top());			// 5

	//3.pop() 将5，4，3出栈  O(1)
	for (int i = 0; i < 3 ; ++i)
		st.pop();						

	//4.top()取栈顶元素  O(1)
	printf("%d\n", st.top());			// 2
	if (st.empty() == true)	printf("empty!\n");
	else printf("not empty\n");			// not empty

	//5.size() 返回栈内元素个数   O(1)
	printf("now size of stack is: %d\n", st.size() );
	return 0;							// now size of stack is: 3
}