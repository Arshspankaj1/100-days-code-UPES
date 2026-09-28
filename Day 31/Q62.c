#include <stdio.h>
int main(void){int n,a[100];scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);for(int i=0;i<n/2;i++){int t=a[i];a[i]=a[n-1-i];a[n-1-i]=t;}for(int i=0;i<n;i++)printf("%d%c",a[i],i==n-1?'\n':' ');return 0;}
