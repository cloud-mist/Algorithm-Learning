// 结构体的优先级设定
#include <iostream>
#include <queue>
#include <string>
using namespace std;
struct fruit
{
	string name;
	int price;
	// 对fruit类操作符< 进行重载
	friend bool operator < (fruit f1, fruit f2){
		return f1.price > f2.price;
	}
}f1, f2, f3;

int main(){
	priority_queue<fruit> q;
	f1 = {"peach", 3};
	f2 = {"pear ", 4};
	f3 = {"apple", 1};
	q.push(f1);
	q.push(f2);
	q.push(f3);
	cout << q.top().name << " " << q.top().price << endl;
	return 0;
}

/*
优先队列和sort的cmp函数 是相反的效果。
优先队列的默认是优先级高的放队首。
*/