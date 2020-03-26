//理清空和*的关系
#include <cstdio>
#include <cstring>
int main(){
    int m, h[100];
    scanf("%d", &m); 
    for ( int i = 0; i < m; ++i)
    {
        scanf("%d", &h[i]);
        int kong = h[i] -1; 
        for (int p = 0; p < h[i]; ++p)
        {
            for (int j = 0; j < kong; ++j)
                printf(" ");
            for (int k =kong ; k < (kong+h[i]+p*2); ++k)
                printf("*");
            for (int l = (kong+h[i]+p*2); l <(3*h[i]-2); ++l)
                printf(" ");

                printf("\n");
                kong -= 1;
        } 
    }
    return 0;
}