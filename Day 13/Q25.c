#include <stdio.h>
int main(void){long long a,b;char op;scanf("%lld%lld %c",&a,&b,&op);switch(op){case '+':printf("%lld\n",a+b);break;case '-':printf("%lld\n",a-b);break;case '*':printf("%lld\n",a*b);break;case '/':if(b)printf("%lld\n",a/b);else puts("Undefined");break;case '%':if(b)printf("%lld\n",a%b);else puts("Undefined");break;default:puts("Invalid operator");}return 0;}
