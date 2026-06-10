#include<stdio.h>
#include<conio.h>
int main()
{
    int N,sum=0;
    printf("enter the value of N");
    scanf("%d", &N);
    for(int i=1;i<=N;i++)
    {sum=sum+i;
    }
    printf("sum of first N natural numbers is %d",sum);
    return 0;
}