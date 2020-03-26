#include <cstdio>
int main()
{
		int n,m;
		int a[110], b[110];
		while(scanf("%d", &n) !=EOF){
				for (int i = 0; i < n; ++i)
				{
						scanf("%d", &a[i]);
				}
				scanf("%d", &m);
				for (int i = 0; i < m; ++i)
				{
						scanf("%d", &b[i]);
				}

				for (int i = 0; i < m; ++i)
				{
						int flag = 0;
						for (int j = 0; j < n; ++j)
						{
								if (b[i] == a[j])
										flag++;
						}
						if (flag != 0) printf("YES\n");
						else printf("NO\n");
				}
		}
		return 0;

}
