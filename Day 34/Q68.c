#include <stdio.h>
int main(void) {
    int n,a[100],pos;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&pos);
    if(pos<0||pos>=n) {
        puts("Invalid position");
        return 0;
    }
    for(int i=pos;i<n-1;i++)a[i]=a[i+1];
    for(int i=0;i<n-1;i++)printf("%d%c",a[i],i==n-2?'\n':' ');
    return 0;
}
