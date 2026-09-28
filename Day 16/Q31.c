#include <stdio.h>
int main(void) {
    unsigned int n;
    scanf("%u",&n);
    if(!n) {
        puts("0");
        return 0;
    }
    char s[33];
    int i=0;
    while(n) {
        s[i++]=(char)('0'+n%2);
        n/=2;
    }
    while(i)putchar(s[--i]);
    putchar('\n');
    return 0;
}
