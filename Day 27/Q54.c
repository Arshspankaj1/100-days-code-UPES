#include <stdio.h>
int main(void) {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i+=2) {
        for(int s=0;s<(n-i)/2;s++)putchar(' ');
        for(int j=0;j<i;j++)putchar('*');
        putchar('\n');
    }
    for(int i=n-2;i>=1;i-=2) {
        for(int s=0;s<(n-i)/2;s++)putchar(' ');
        for(int j=0;j<i;j++)putchar('*');
        putchar('\n');
    }
    return 0;
}
