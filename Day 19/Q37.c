#include <stdio.h>
int main(void) {
    long long a,b,x,y;
    scanf("%lld%lld",&a,&b);
    x=a;
    y=b;
    while(y) {
        long long t=x%y;
        x=y;
        y=t;
    }
    if(x<0)x=-x;
    printf("%lld\n",a/x*b);
    return 0;
}
