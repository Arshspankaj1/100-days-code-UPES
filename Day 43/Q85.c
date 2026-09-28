#include <stdio.h>
#include <string.h>
int main(void){char s[200];fgets(s,sizeof s,stdin);int n=(int)strlen(s);if(n&&s[n-1]=='\n')s[--n]='\0';for(int i=n-1;i>=0;i--)putchar(s[i]);putchar('\n');return 0;}
