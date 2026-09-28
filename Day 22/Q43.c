#include <stdio.h>
int main(void) {
    int n,x,sum=0;
    scanf("%d",&n);
    x=n;
    do {
        int d=x%10,f=1;
        for(int i=2;i<=d;i++)f*=i;
        sum+=f;
        x/=10;
    }
    while(x);
    puts(sum==n?"Strong number":"Not a strong number");
    return 0;
}
