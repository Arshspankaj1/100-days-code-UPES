#include <stdio.h>
#include <ctype.h>
int main(void) {
    char s[200];
    fgets(s,sizeof s,stdin);
    int sp=0,d=0,sc=0;
    for(int i=0;s[i]&&s[i]!='\n';i++) {
        if(s[i]==' ')sp++;
        else if(isdigit((unsigned char)s[i]))d++;
        else if(!isalnum((unsigned char)s[i]))sc++;
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n",sp,d,sc);
    return 0;
}
