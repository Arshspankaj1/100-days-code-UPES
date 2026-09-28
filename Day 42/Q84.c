#include <stdio.h>
int main(void) {
    char s[200];
    fgets(s,sizeof s,stdin);
    for(int i=0;s[i];i++)if(s[i]>='a'&&s[i]<='z')s[i]=(char)(s[i]-'a'+'A');
    fputs(s,stdout);
    return 0;
}
