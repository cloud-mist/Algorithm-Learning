#include <cstdio>
int n;
bool flag[20]={false};
int ans[20];
void combine(int count)
{
    if(count==n)
    {
        for(int i=0;i<n;i++)
        {
            printf("%d ",ans[i]);
        }
        printf("\n");
        return ;
    }
    for(int i=0;i<n;i++)
    {
        if(flag[i]==false)
        {
            ans[count]=i+1;
            flag[i]=true;
            combine(count+1);
            flag[i]=false;
        }
    }
}

int main()
{
    while(~scanf("%d",&n))
    {
        int count=0;
        combine(count);
    }
    return 0;
}
