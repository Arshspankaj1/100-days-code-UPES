#include <stdio.h>
int main(void){long long n,r=0,x;scanf("%lld",&n);x=n<0?-n:n;while(x){r=r*10+x%10;x/=10;}puts((n>=0?n:r)==n?"Palindrome":"Not palindrome");return 0;}
