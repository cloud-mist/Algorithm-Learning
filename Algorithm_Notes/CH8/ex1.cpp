#include <cstdio>
const int maxn = 30;
int n, V, maxValue = 0;		// 物品件数n, 背包容量V， 最大价值maxValue
int w[maxn], c[maxn];		// 每件物品的重量和价值

void DFS(int index, int sumW, int sumC) {	// 当前处理物品的编号， 当前总重量，当前总价值
	if(index == n) {
		if(sumW <= V && sumC > maxValue) {
			maxValue = sumC;	
		}
		return;
	}
	// 岔路口
	DFS(index + 1, sumW, sumC);							// 不选第index件物品
	DFS(index + 1, sumW + w[index], sumC + c[index]);	// 选
}

int main(){
	scanf("%d%d", &n, &V);

	// 输入每件物品的重量和价值
	for(int i = 0; i < n; i++){
		scanf("%d", &w[i]);
	}
	for(int i = 0; i < n; i++){
		scanf("%d", &c[i]);
	}

	DFS(0, 0, 0);						// 初始化
	printf("%d\n", maxValue);
	return 0;
}
