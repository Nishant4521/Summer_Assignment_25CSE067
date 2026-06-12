#include <stdio.h>
#include <conio.h>
int main() 
{int n,i,n1=0,n2=1,nextTerm;
printf("Enter the position (n)");
scanf("%d", &n);
if (n == 1) {
printf("The 1st Fibonacci term is: %d", n1);
} 
else if (n == 2) {
printf("The 2nd Fibonacci term is: %d", n2);
} 
else {
for (i = 3; i <= n; i++) {
nextTerm = n1 + n2;
n1 = n2;
n2 = nextTerm;
}
printf("The %dth Fibonacci term is: %d", n, n2);
    }
getch();
return 0;
}