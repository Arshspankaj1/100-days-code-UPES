#include <stdio.h>
int main(void) {
    int n,x,p=1,sum=0,d=0;
    scanf("%d",&n);
    x=n;
    do {
        d++;
        x/=10;
    }
    while(x);
    x=n;
    do {
        int q=x%10;
        int pw=1;
        for(int i=0;i<d;i++)pw*=q;
        sum+=pw;
        x/=10;
    }
    while(x);
    puts(sum==n?"Armstrong":"Not Armstrong");
    return 0;
}
