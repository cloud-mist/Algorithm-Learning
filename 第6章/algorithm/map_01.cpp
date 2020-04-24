/*map 建立字符（字符串）与整数的映射 （字符串必须用string）
字符串与字符串的映射
注意：map会以键 自动从小到大排列！！，因为是用红黑树实现的，set也是
c++11  unordered_map  用散列代替红黑树。只映射，不排序。速度快
*/
#include <cstdio>
#include <map>
using namespace std;
int main(){
	map<char, int> mp;
	mp['a'] = 3;
	mp['b'] = 2;
	mp['c'] = 1;
	//1.find  logN  返回键的迭代器
	map<char, int>::iterator it = mp.find('b');
	printf("%c %d\n",it->first, it->second);	//first 访问映射前值，sec访问映射后的值

	//2.mp.erase(it)  it为删除的元素的迭代器。 O（1）
	mp.erase(it); //删除b 2
	for(map<char, int>::iterator it = mp.begin(); it != mp.end();it++)
	{
		printf("%c %d\n",it->first, it->second);
	}
	printf("\n");
	//3.mp.erase('b')   O(logN)	删除b 2
	//4.mp.erase(first, last)  迭代器，last下一个地址。 左闭右开[)
	mp['b'] = 5;
	for(map<char, int>::iterator it = mp.begin(); it != mp.end();it++)
	{
		printf("%c %d\n",it->first, it->second);
	}
	printf("\n");

	mp.erase(it,mp.end() );
	for(map<char, int>::iterator it = mp.begin(); it != mp.end();it++)
	{
		printf("%c %d\n",it->first, it->second);
	}

	//5.获得映射的对数  O(1)
	printf("%d\n", mp.size() );

	//6.clear()		   O(n)
	mp.clear();
	printf("%d\n", mp.size() );
	

	return 0;
}
