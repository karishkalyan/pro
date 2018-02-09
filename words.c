#include<stdio.h>
#include<string.h>
void main()
{
char s[50],i,b,count=0;
printf("\n enter the string:");
gets(s);
b=strlen(s);
for(i=0;i<b;i++)
{
if(s[i]!=" ")
{
count++;
}
}
getch();
}
