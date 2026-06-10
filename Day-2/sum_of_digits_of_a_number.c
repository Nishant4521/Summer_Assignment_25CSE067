#include<stdio.h>
#include<conio.h>
int main()
{int n,remainder,sum=0;
printf("enter the value of n");
scanf("%d", &n);
while(n>0)
{remainder=n%10;
sum=sum+remainder;
n=n/10;
}
printf("sum of digits of a number is %d",sum);
return 0;
}