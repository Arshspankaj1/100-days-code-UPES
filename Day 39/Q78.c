#include <stdio.h>
int main(void) {
    int n,a[20][20],s=0;
    scanf("%d%d",&n,&n);
    for(int i=0;i<n;i++)for(int j=0;j<n;j++) {
        scanf("%d",&a[i][j]);
        if(i==j)s+=a[i][j];
    }
    printf("%d\n",s);
    return 0;
}
