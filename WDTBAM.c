#include<stdio.h>
 
int main()
{
	long long int T,N,i,len,flag;
	long long int w,temp,max;
	scanf("%lld",&T);
	while(T--){
		scanf("%lld",&N);
		char ans[N],ques[N];
		long long int W [N+1];
		flag=0;
		scanf("%s",ans);
		scanf("%s",ques);
		len=0,max=0;
		scanf("%lld",&W [0]);
		for(i=0;i<N;i++){
			if(ans[i]==ques[i])
				len++;
			scanf("%lld",&W[i+1]);
		}
		if(len==0 || len==N){
			w=W [len];
		}else{
			for(i=0;i<=len;i++){
				if(max<W [i]){
					max = W [i];
				}
			}
			w=max;
		}
		printf("%lld\n",w);
 
	}
	return 0;
}  