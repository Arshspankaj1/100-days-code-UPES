#include <stdio.h>
int main(void) {
    long long n,p=1;
    int found=0;
    scanf("%lld",&n);
    if(n<0)n=-n;
    do {
        int d=n%10;
        if(d%2) {
            p*=d;
            found=1;
        }
        n/=10;
    }
    while(n);
    printf("%lld\n",found?p:0);
    return 0;
}
