#include <stdio.h>
char *proverb="All that glisters is not gold.";
void setPointer(char **q)
{
*q = proverb;
}
int main(void)
{
char *p = "zzz";
char **a=&p;
setPointer(a);
printf("%s \n", p);
return 0;
}
