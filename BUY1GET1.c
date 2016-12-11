#include <stdio.h>
#include<string.h>
int main()
{
    int t, i, len, co=0, h, y, a=0, cost[100], tem=0;
    char s[201], alp, x[]="qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
    scanf("%d", &t);
    for(i=1; i<=t; i++){
    co=0;
    scanf("%s", s);
    //printf("%c", s[0]);
    len=strlen(s);
    for(h=0; h<=51; h++){
        alp=x[h];
        a=0;
        for(y=0; y<len; y++){
        if(s[y]==alp){
            a++;
        }
        }
        if(a % 2 == 1){
        a=(a/2)+1;
        }
        else{
        a=a/2;
        }
        co=co+a;
    }
    cost[tem]=co;
    tem++;
 
    }
    for(tem=0; tem<t; tem++){
    printf("%d\n", cost[tem]);
    }
return 0;
}