#include <stdio.h>
int main(void){long long a,b; scanf("%lld%lld",&a,&b); a^=b;b^=a;a^=b; printf("%lld %lld\n",a,b); return 0;}
