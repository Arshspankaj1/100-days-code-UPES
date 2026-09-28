#include <stdio.h>
int main(void) {
    int r,c,x,s=0;
    scanf("%d%d",&r,&c);
    for(int i=0;i<r*c;i++) {
        scanf("%d",&x);
        s+=x;
    }
    printf("%d\n",s);
    return 0;
}
