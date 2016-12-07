#include<stdio.h>
int main()
{
	int a,b,c=0,x,i=1;
	scanf("%d%d",&a,&b);
	for(i=1;i<=a;i++)
	{
		scanf("%d",&x);
    	if(x%b==0)
			c++;
	}
	printf("%d",c);
    return(0);
}