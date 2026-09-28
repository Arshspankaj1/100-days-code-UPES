#include <stdio.h>
int main(void){long long s; scanf("%lld",&s); printf("%lld:%02lld:%02lld\n",s/3600,(s%3600)/60,s%60); return 0;}
