#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,j;
	char s[100];
	scanf("%d",&t);
	while(t<=40&&t>0)
    {
	       scanf("%s",s);
	       j=0;
	      for(i=0;i<strlen(s);i++)
    {
	    if(s[i]=='A'||s[i]=='D'||s[i]=='O'||s[i]=='P'||s[i]=='Q'||s[i]=='R')
	    {
			j=j+1;
		}
		else if(s[i]=='B')
		{
			j=j+2;
		}
	}
	printf("%d\n",j);
	t--;
}
return 0;
}
