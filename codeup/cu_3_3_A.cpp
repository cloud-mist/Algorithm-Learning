//输出梯形，高h上低h
#include <cstdio>
int main(){
    int h; 
    while(scanf("%d", &h) != EOF) // 多个测试数据！！
    {
        int t = 2*h-2; 
        for (int i = 0; i < h; ++i)
        {
            for (int j = 0; j < t; ++j)
            {
                printf(" ");
            }
            for (int k =t ; k < (3*h-2); ++k)
            {
                printf("*");
            }
                printf("\n");
                t -= 2;
        }
    }
    return 0;
}