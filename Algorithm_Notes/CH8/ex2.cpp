// 1.问题：给定N个整数，从中选择K个数，使得K个数之和=给定的整数X。若有多种，选平方和最大的。
// 2.例子：{2,3,4,4}选2个数，使其和为6。 结果是{2,4}&{3,3}，但平方和{2,4}大，so选它。

/* 3.过程：
 *
 *
 * 
 *
 *
 *
 * */

#include <cstdio>
#include <vector>
using namespace std;

int n, k, x, maxSumSqu = -1; 
int	A[1000];
vector<int> temp, ans;

void DFS(int index, int nowK, int sum, int sumSqu){
	if(nowK == k && sum == x){					// 找到k个数之和为x
		if(sumSqu > maxSumSqu){						// 如果比当前找到的更优
			maxSumSqu = sumSqu;							// 更新最大平方和
			ans = temp;									// 更新最优方案
		}
		return;
	}
	
	// 已经处理完n个数，或超过n个数，或和超过x，返回
	if(index == n || nowK > k || sum > x) return;

	// 选index号数
	temp.push_back(A[index]);
	DFS(index + 1, nowK + 1, sum + A[index], sumSqu + A[index] * A[index]);
	temp.pop_back();

	// 不选index号数
	DFS(index + 1, nowK, sum, sumSqu);
}

int main(){
	scanf("%d %d %d", &n, &k, &x);
	for(int i = 0; i < n; i++){
		scanf("%d", &A[i]);
	}
	DFS(0, 0, 0, 0);
	for(int i = 0; i < k; i++)
	{
		printf("%d ", ans[i]);
	}
	printf("\n%d", maxSumSqu);
}
