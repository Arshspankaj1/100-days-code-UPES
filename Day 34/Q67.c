#include <stdio.h>
int main(void){int n,a[101],pos,x;scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d%d",&pos,&x);if(pos<0||pos>n){puts("Invalid position");return 0;}for(int i=n;i>pos;i--)a[i]=a[i-1];a[pos]=x;for(int i=0;i<=n;i++)printf("%d%c",a[i],i==n?'\n':' ');return 0;}
