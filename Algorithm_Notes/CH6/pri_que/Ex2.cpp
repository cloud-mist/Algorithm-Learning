// 基本数据类型，如int，double, char、的优先级设定

#include <cstdio>
#include <queue>
using namespace std;
int main(){
    priority_queue<int, vector<int>, greater<int> > q;
    // vector<int> 承载底层数据结构heap的容器， 若参数1 是double，则vector<double>
    // 参数3 greater<int>表示数字小的优先级越大； less<int>数字大的优先级越大
    q.push(3);
    q.push(4);
    q.push(1);
    printf("%d\n", q.top());        // 1
    return 0;
}