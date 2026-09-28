#include <stdio.h>
int main(void){int n,a[101],x;scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&x);int i=n-1;while(i>=0&&a[i]>x){a[i+1]=a[i];i--;}a[i+1]=x;for(i=0;i<=n;i++)printf("%d%c",a[i],i==n?'\n':' ');return 0;}
