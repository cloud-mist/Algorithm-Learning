// Q:简单计算器

/* A: ********1.中缀转后缀  2.计算后缀********
1.碰到操作数，加入后缀表达式。 碰到当前op，与op栈顶的op进行优先级比较：
  若当前op优先级 > 栈顶的， 压入op栈；
  否则，将op栈的操作符不断弹出到后缀表达式，直到当前op优先级 > 栈顶的
重复，直到中缀表达式扫描完。 若操作符栈仍有元素，依次弹出至后缀表达式。

2.从左到右扫描--> 操作数，压入栈；操作符，连续弹出两个操作数(先弹的是第二操作数)-->进行
  操作符操作，生成新的操作数压入栈中 -->反复直到扫描完毕，栈中只有一个数，就是答案。
*/

#include <cstdio>
#include <iostream>
#include <stack>
#include <queue>
#include <map>
#include <string>
using namespace std;

struct node
{
	double num;	//操作数
	char op;	//op
	bool flag;	//true表示操作数， false表示操作符
};

string str;
stack<node> s;	//操作符栈
queue<node> q;	//后缀表达式队列
map<char, int> op;

//中缀转后缀
void Change()
{
	double num;
	node temp;
	for (int i = 0; i < str.length();)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			temp.flag = true;
			temp.num = str[i++] - '0';
			while(i < str.length() && str[i] >= '0' && str[i] <= '9')
			{
				temp.num = temp.num * 10 + (str[i] - '0');
				i++;
			}
			q.push(temp);
		}else{
			temp.flag = false;
			while(!s.empty() && op[str[i]] <= op[s.top().op])
			{
				q.push(s.top());
				s.pop();
			}
			temp.op = str[i];
			s.push(temp);
			i++;
		}
	}
	while(!s.empty())
	{
		q.push(s.top());
		s.pop();
	}
		
}

//计算后缀表达式
double Cal()
{
	double temp1, temp2;
	node cur, temp;
	while(!q.empty())						//后缀表达式队列不空
	{
		cur = q.front();					//记录队首元素
		q.pop();
		if (cur.flag == true) s.push(cur);	//操作数，直接入栈
		else {								
			temp2 = s.top().num;			//弹出第二操作数
			s.pop();
			temp1 = s.top().num;			//第一操作数
			s.pop();

			temp.flag == true;				//临时存储操作数	
			if(cur.op == '+') temp.num = temp1 + temp2;
			else if(cur.op == '-') temp.num = temp1 - temp2;
			else if(cur.op == '*') temp.num = temp1 * temp2;
			else temp.num = temp1 / temp2;
			s.push(temp);					//把计算好的操作数压入栈
		}
	}
	return s.top().num;
}


int main()
{
	op['+'] = op['-'] = 1;
	op['*'] = op['/'] = 2;

	while(getline(cin, str), str != "0")
	{
		for (string::iterator it = str.end(); it != str.begin(); it--)
			if (*it == ' ')	str.erase(it);	//将表达式中的空格全部去掉
		while(!s.empty()) s.pop();
		Change();
		printf("%.2f\n", Cal());
	}
}