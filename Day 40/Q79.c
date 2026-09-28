#include <stdio.h>
int main(void) {
    int n,a[20][20];
    scanf("%d%d",&n,&n);
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
    for(int d=0;d<2*n-1;d++) {
        int r0=d<n?d:n-1,c0=d<n?0:d-n+1;
        for(int r=r0,c=c0;r>=0&&c<n;r--,c++)printf("%d ",a[r][c]);
    }
    putchar('\n');
    return 0;
}
