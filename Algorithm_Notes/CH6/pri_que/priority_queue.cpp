/*
优先队列：底层是用堆来实现; 队首元素是优先级最高的。

*/

#include <cstdio>
#include <queue>
using namespace std;
int main(){
    // 1.创建
    priority_queue<int> q;

    // 2.push(x) 将x入队， 时复O(logN) 
    q.push(3);
    q.push(4);
    q.push(1);

    // 3.top() 获取堆顶元素 时复O(1)
    printf("%d\n", q.top() );               // 4

    // 4.pop() 堆顶元素出对， 时复O(logN)
    q.pop();
    printf("%d\n", q.top() );               // 3

    // 5.empty()  判空
    if (q.empty() == true) printf("empty\n");
    else printf("not empty\n");             // not empty

    // 6.size() 队列内元素个数 时复O(1)
    q.push(6);
    printf("%d %d\n", q.size(), q.top() );  // 3 6
    return 0;
}