#include <stdio.h>
int main(void) {
    int n,a[100],k;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&k);
    if(n==0)return 0;
    k%=n;
    for(int r=0;r<k;r++) {
        int t=a[n-1];
        for(int i=n-1;i>0;i--)a[i]=a[i-1];
        a[0]=t;
    }
    for(int i=0;i<n;i++)printf("%d%c",a[i],i==n-1?'\n':' ');
    return 0;
}
