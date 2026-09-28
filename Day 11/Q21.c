#include <stdio.h>
int main(void) {
    int m;
    scanf("%d",&m);
    const char*n[]= {
        "January","February","March","April","May","June","July","August","September","October","November","December"
    };
    int d[]= {
        31,28,31,30,31,30,31,31,30,31,30,31
    };
    if(m>=1&&m<=12)printf("%s, %d days\n",n[m-1],d[m-1]);
    else puts("Invalid month");
    return 0;
}
