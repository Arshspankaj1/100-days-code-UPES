#include <stdio.h>
int main(void) {
    long long n,p=1;
    scanf("%lld",&n);
    for(long long i=2;i<=n;i+=2)p*=i;
    printf("%lld\n",p);
    return 0;
}
