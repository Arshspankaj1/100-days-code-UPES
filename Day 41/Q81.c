#include <stdio.h>
int main(void){char s[200];fgets(s,sizeof s,stdin);int n=0;while(s[n]&&s[n]!='\n')n++;printf("%d\n",n);return 0;}
