#include<stdio.h>
void main()
{
char n;
scanf("%c",&n);
if( (n>='a' && n<='z') || (n>='A' && n<='Z'))
printf("the given letter is an alphabet");
else
printf("the given number is not an alphabet");
}
