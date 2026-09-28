#include <stdio.h>
#include <ctype.h>
int main(void){char s[200];fgets(s,sizeof s,stdin);int v=0,c=0;for(int i=0;s[i];i++)if(isalpha((unsigned char)s[i])){char x=(char)tolower((unsigned char)s[i]);if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')v++;else c++;}printf("Vowels=%d, Consonants=%d\n",v,c);return 0;}
