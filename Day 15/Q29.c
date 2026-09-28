#include <stdio.h>
int main(void){unsigned long long n,f=1;scanf("%llu",&n);for(unsigned long long i=2;i<=n;i++)f*=i;printf("%llu\n",f);return 0;}
