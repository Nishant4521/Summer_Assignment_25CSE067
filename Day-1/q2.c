#include<stdio.h>
#include<conio.h>
int main()
{int number,i;
printf("enter the value of number");
scanf("%d", &number);
for(i=1;i<=10;i++)
{printf("%d*%d=%d\n",number,i,number*i);
}
return 0;
}