#include <stdio.h>
#include <string.h>
int main(void){char s[200];fgets(s,sizeof s,stdin);int n=(int)strlen(s);if(n&&s[n-1]=='\n')s[--n]='\0';int ok=1;for(int i=0;i<n/2;i++)if(s[i]!=s[n-1-i])ok=0;puts(ok?"Palindrome":"Not palindrome");return 0;}
