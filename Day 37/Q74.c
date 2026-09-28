#include <stdio.h>
int main(void) {
    int r,c,a[20][20];
    scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);
    for(int j=0;j<c;j++) {
        for(int i=0;i<r;i++)printf("%d%c",a[i][j],i==r-1?'\n':' ');
    }
    return 0;
}
