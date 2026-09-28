#include <stdio.h>
int main(void){int r,c,a,s[20]={0};scanf("%d%d",&r,&c);for(int i=0;i<r;i++)for(int j=0;j<c;j++){scanf("%d",&a);s[i]+=a;}for(int i=0;i<r;i++)printf("%d%c",s[i],i==r-1?'\n':' ');return 0;}
