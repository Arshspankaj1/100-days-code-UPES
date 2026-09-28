#include <stdio.h>
int main(void) {
    char s[200];
    fgets(s,sizeof s,stdin);
    for(int i=0;s[i];i++)if(s[i]==' ')s[i]='-';
    fputs(s,stdout);
    return 0;
}
