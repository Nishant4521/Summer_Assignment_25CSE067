#include<stdio.h>
#include<conio.h>
int main()
{int n,remainder,product=1;
printf("enter the value of n");
scanf("%d", &n);
while(n>0)
{remainder=n%10;
product=product*remainder;
n=n/10;
}
printf("product of digits of a number is %d",product);
return 0;
}