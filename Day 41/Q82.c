#include <stdio.h>
int main(void){char s[200];fgets(s,sizeof s,stdin);for(int i=0;s[i]&&s[i]!='\n';i++)putchar(s[i]),putchar('\n');return 0;}
