#include <stdio.h>
int main(void) {
    int d;
    scanf("%d",&d);
    const char* names[]= {
        "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"
    };
    if(d>=1&&d<=7)puts(names[d-1]);
    else puts("Invalid input");
    return 0;
}
