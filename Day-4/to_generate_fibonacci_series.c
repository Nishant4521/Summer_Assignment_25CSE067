#include <stdio.h>
#include <conio.h>
int main() 
{int n,i,n1=0,n2=1,nextTerm;
printf("Enter the number of terms");
scanf("%d", &n);
printf("Fibonacci Series");
for (i = 1; i <= n; i++) 
{printf("%d", n1);
if (i < n) {
printf(", ");
}
nextTerm = n1 + n2;
n1 = n2;
n2 = nextTerm;
}
getch();
return 0;
}