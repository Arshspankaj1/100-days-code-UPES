#include <stdio.h>
int main(void) {
    int n,s=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++)if(n%i==0)s+=i;
    puts(s==n?"Perfect number":"Not a perfect number");
    return 0;
}
