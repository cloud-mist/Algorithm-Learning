/* 
          *********对Ex3的另一种形式*********
 1.建议：如果结构体数据庞大，使用引用。 在比较类的参数中加上 const 和 &
 2.用途：解决一些贪心问题。  对dijkstra算法进行优化。
 3.注意：使用top() 之前，要用empty()进行判空。
*/

#include <iostream>
#include <queue>
#include <string>
using namespace std;
struct fruit
{
	string name;
	int price;
}f1, f2, f3;
struct cmp{
	bool operator () (fruit f1, fruit f2){
		return f1.price > f2.price;
	}
};
int main(){
	priority_queue<fruit, vector<fruit>, cmp> q;
	f1 = {"peach", 3};
	f2 = {"pear ", 4};
	f3 = {"apple", 1};
	q.push(f1);
	q.push(f2);
	q.push(f3);
	cout << q.top().name << " " << q.top().price << endl;
	return 0;
}