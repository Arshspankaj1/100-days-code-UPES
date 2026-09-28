#include <stdio.h>
int main(void) {
    int n,a[100],x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&x);
    int l=0,r=n-1,pos=-1;
    while(l<=r) {
        int m=(l+r)/2;
        if(a[m]==x) {
            pos=m;
            break;
        }
        if(a[m]<x)l=m+1;
        else r=m-1;
    }
    if(pos>=0)printf("Found at index %d\n",pos);
    else puts("Not found");
    return 0;
}
