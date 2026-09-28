#include <stdio.h>
int main(void) {
    int n,a[100],x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&x);
    int pos=-1;
    for(int i=0;i<n;i++)if(a[i]==x) {
        pos=i;
        break;
    }
    if(pos>=0)printf("Found at index %d\n",pos);
    else puts("Not found");
    return 0;
}
