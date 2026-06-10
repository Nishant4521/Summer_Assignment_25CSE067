#include<stdio.h>
#include<conio.h>
int main()
{
int n,count;
count=0;
printf("enter the value of n");
scanf("%d", &n);
if(n==0)
{count=1;
}
else{
while(n>0){
    n=n/10;
    count++;
}}
printf("total number of digits is %d",count);
return 0;
}