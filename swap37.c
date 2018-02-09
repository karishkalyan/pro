#include<stdio.h>
void main()
{
int a,b,temp;
printf("\n enter the numbers");
scanf("%d%d",&a,&b);
printf("\n the values before swapping a=%da and b=%d",a,b);
temp=a;
a=b;
b=temp;
printf("\n the swapped values are a=%d and b=%d",a,b);
getch();
}
