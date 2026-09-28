#include <stdio.h>
#include <string.h>
int main(void) {
    char s[100];
    scanf("%99s",s);
    for(int i=0;s[i];i++)s[i]=(s[i]=='0'?'1':'0');
    puts(s);
    return 0;
}
