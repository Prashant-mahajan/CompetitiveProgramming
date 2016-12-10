#include<stdio.h>
int main()
{
	int T,m,n;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d\t %d\t", &n, &m);	//Enter the total no of jobs & jobs done out of n
		int a[m], b[n-m],j,k,l=0;
		for(j=0;j<m;j++)
		{
			scanf("%d\t",&a[j]);
		}
		for(j=1;j<=n;j++)
		{
			for(k=0;k<m;k++)
			{
				if(j == a[k])
					break;
			}
			if(k == m)
			{
				b[l++] = j;
			}
		}
		for(j=0;j<l;j=j+2)
		{
			printf("%d  ", b[j]);	//jobs to be done by chef
		}
		printf("\n");
		for(j=1;j<l;j=j+2)
		{
			printf("%d  ", b[j]);	//jobs to be done by assistant
		}
		printf("\n");

	}
	return 0;
}