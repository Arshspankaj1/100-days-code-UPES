#include <stdio.h>
int main(void) {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        for(int s=0;s<i;s++)putchar(' ');
        for(int j=i;j<n;j++)putchar('*');
        putchar('\n');
    }
    return 0;
}
