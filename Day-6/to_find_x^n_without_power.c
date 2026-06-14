#include <stdio.h>
#include <conio.h>
int main() {
int base, exp;
long long result = 1; 
printf("Enter base");
scanf("%d", &base);
printf("Enter exponent");
scanf("%d", &exp);
for(int i = 1; i <= exp; i++) {
result = result * base;
}
printf("%d raised to the power %d is: %lld", base, exp, result);
getch();
return 0;
}