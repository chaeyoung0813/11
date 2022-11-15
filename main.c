#include <stdio.h>
int main(void)
{
int i;
int accum = 0;
int grade[5];
for (i=0;i<5;i++)
{
printf("grade[%i] = ", i);
scanf("%d", &grade[i]);
}
for (i=0; i<5; i++)
{
	printf("%i : %i\n", i, *(grade+i));
	accum += *(grade+i);
}
return 0;
}
