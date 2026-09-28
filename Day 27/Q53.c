#include <stdio.h>
int main(void){int n;scanf("%d",&n);for(int i=1;i<=n;i+=2){for(int j=0;j<(n-i)/2;j++)putchar(' ');for(int j=0;j<i;j++)putchar('*');putchar('\n');}for(int i=n-2;i>=1;i-=2){for(int j=0;j<(n-i)/2;j++)putchar(' ');for(int j=0;j<i;j++)putchar('*');putchar('\n');}return 0;}
