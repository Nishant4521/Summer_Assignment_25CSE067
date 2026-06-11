#include <stdio.h>
#include<conio.h>
int main()
{int num1,num2,i,gcd=1;
printf("Enter the value of two numbers");
scanf("%d %d", &num1, &num2);
for (i=1;i<=num1 && i<=num2;i++) 
{if (num1%i==0 && num2%i==0) 
{gcd = i; 
}
}
 printf("GCD is: %d", gcd);
 return 0;
}