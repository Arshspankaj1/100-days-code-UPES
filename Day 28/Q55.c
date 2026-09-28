#include <stdio.h>
int main(void) {
    int n;
    scanf("%d",&n);
    for(int x=2;x<=n;x++) {
        int prime=1;
        for(int d=2;d<=x/d;d++)if(x%d==0) {
            prime=0;
            break;
        }
        if(prime)printf("%d ",x);
    }
    putchar('\n');
    return 0;
}
