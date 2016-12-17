#include<stdio.h>
int main()
{   int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d\n",&n);
    if(n<10)
       printf("What an obedient servant you are!\n");
    else
       printf("-1\n");
    }
	return 0;
}