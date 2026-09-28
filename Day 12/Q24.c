#include <stdio.h>
int main(void){int u;long b=0;scanf("%d",&u);if(u>0){b+=(u>100?100:u)*5;if(u>100)b+=(u>200?100:u-100)*7;if(u>200)b+=(u>300?100:u-200)*10;if(u>300)b+=(u-300)*12;}printf("Bill: ₹%ld\n",b);return 0;}
