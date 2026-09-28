#include <stdio.h>
int main(void) {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<0)a=-a;
    if(b<0)b=-b;
    while(b) {
        int t=a%b;
        a=b;
        b=t;
    }
    printf("%d\n",a);
    return 0;
}
