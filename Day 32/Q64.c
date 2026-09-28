#include <stdio.h>
int main(void){long long n;int cnt[10]={0};scanf("%lld",&n);if(n<0)n=-n;do{cnt[n%10]++;n/=10;}while(n);int best=0;for(int d=1;d<10;d++)if(cnt[d]>cnt[best])best=d;printf("%d\n",best);return 0;}
