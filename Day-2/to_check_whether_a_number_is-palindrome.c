#include<stdio.h>
#include<conio.h>
int main()
{int n,originalnum,remainder,reverse=0;
printf("enter the value of n");
scanf("%d", &n);
originalnum=n;
while(n>0)
{remainder=n%10;
reverse=(reverse*10)+remainder;
n=n/10;
}
if(originalnum==reverse)
{printf("%d is a palindrome",originalnum);
}
else{
    printf("%d is not a palindrome,originalnum");
}
return 0;
}