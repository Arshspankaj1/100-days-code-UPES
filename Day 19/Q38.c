#include <stdio.h>
int main(void){long long n,s=0;scanf("%lld",&n);if(n<0)n=-n;do{s+=n%10;n/=10;}while(n);printf("%lld\n",s);return 0;}
