#include <stdio.h>
int main(void){double cp,sp;scanf("%lf%lf",&cp,&sp);if(sp>cp)printf("Profit %.2f%%\n",(sp-cp)*100/cp);else if(sp<cp)printf("Loss %.2f%%\n",(cp-sp)*100/cp);else puts("No profit, no loss");return 0;}
