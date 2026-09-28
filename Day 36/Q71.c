#include <stdio.h>
int main(void) {
    int r,c,a[20][20];
    scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++)printf("%d%c",a[i][j],j==c-1?'\n':' ');
    }
    return 0;
}
