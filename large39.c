#include<stdio.h>
void main()
{
int a[10],i,max;
printf("\n enter the elements:");
for(i=0;i<=9;i++)
{
scanf("%d\t",&a[i]);
}
max=a[0];
for(i=0;i<=9;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("\n the largest num is %d",max);
getch();
}
 
