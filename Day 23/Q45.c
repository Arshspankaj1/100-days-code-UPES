#include <stdio.h>
int main(void) {
    int n;
    double s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)s+=(2.0*i)/(4.0*i-1);
    printf("Approximate sum: %.2f\n",s);
    return 0;
}
