#include <stdio.h>
int main(void) {
    int n;
    scanf("%d",&n);
    if(n<2) {
        puts("Not prime");
        return 0;
    }
    for(int i=2;i<=n/i;i++)if(n%i==0) {
        puts("Not prime");
        return 0;
    }
    puts("Prime");
    return 0;
}
