#include <stdio.h>
#include <limits.h>
int main(void){int n,a[100];scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);int max=INT_MIN,second=INT_MIN;for(int i=0;i<n;i++){if(a[i]>max){second=max;max=a[i];}else if(a[i]>second&&a[i]!=max)second=a[i];}if(second==INT_MIN)puts("No second largest element");else printf("%d\n",second);return 0;}
