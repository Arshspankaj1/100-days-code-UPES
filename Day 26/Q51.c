#include <stdio.h>
int main(void) {
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--) {
        for(int s=1;s<i;s++)putchar(' ');
        for(int j=i;j<=n;j++)printf("%d",j);
        putchar('\n');
    }
    return 0;
}
