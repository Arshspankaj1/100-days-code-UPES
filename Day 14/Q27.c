#include <stdio.h>
int main(void) {
    long long n,s=0;
    scanf("%lld",&n);
    for(long long i=1;i<=n;i++)s+=2*i-1;
    printf("%lld\n",s);
    return 0;
}
