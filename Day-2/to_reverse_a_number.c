#include<stdio.h>
#include<conio.h>
int main()
{int n,remainder,reverse=0;
printf("enter the value of n");
scanf("%d", &n);
while(n>0)
{remainder=n%10;
reverse=(reverse*10)+remainder;
n=n/10;
}
printf("reversed number is %d",reverse);
return 0;
}