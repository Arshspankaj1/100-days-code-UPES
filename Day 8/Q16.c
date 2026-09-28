#include <stdio.h>
int main(void) {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int m=a;
    if(b>m)m=b;
    if(c>m)m=c;
    printf("Largest is %d\n",m);
    return 0;
}
