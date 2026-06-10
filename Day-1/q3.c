#include<stdio.h>
#include<conio.h>
int main()
{
int num,i,fact;
fact=1;
printf("enter the value of num");
scanf("%d", &num);
for(i=1;i<=num;i++)
 {fact=fact*i;
}
printf("factorial of given number is %d",fact);
 return 0;
}