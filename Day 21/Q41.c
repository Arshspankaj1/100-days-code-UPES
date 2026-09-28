#include <stdio.h>
int main(void){long long n,x,p=1,r=0;scanf("%lld",&n);x=n<0?-n:n;while(x>=10){x/=10;p*=10;}long long first=x,last=n%10;if(last<0)last=-last;long long middle=n-first*p-last;long long ans=last*p+middle+first;printf("%lld\n",ans);return 0;}
