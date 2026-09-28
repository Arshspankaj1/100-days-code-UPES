#include <stdio.h>
int main(void) {
    int d;
    scanf("%d",&d);
    if(d>30) {
        puts("Membership Cancelled");
        return 0;
    }
    int fine=0;
    if(d>0) {
        fine+=(d<5?d:5)*2;
        if(d>5)fine+=(d<10?d-5:5)*4;
        if(d>10)fine+=(d-10)*6;
    }
    printf("Fine ₹%d\n",fine);
    return 0;
}
