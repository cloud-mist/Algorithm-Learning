#include <cstdio>
const int maxn = 100010;
int school[maxn] = {0};
int main(){
        int N;
        scanf("%d",&N);
        
        int id,score;
        //统计每个学校的得分情况
        for(int i = 0; i< N;i++){
        scanf("%d%d",&id,&score);
        school[id] += score;
        }
        int max = 0,p = 1;
        for(int i = 1; i<=N;i++){
            if(school[i] > max){
                max = school[i];
                p = i;
            }
        

        }

        printf("%d %d\n",p,max);
        return 0;

}
