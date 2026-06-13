#include <stdio.h>
#include <conio.h>
int main() {
int n, i, factor = -1;
printf("Enter a number");
scanf("%d", &n);
for(i = 2; i <= n; i++) {
if(n % i == 0) {
int Prime = 1;
for(int j = 2; j * j <= i; j++) {
if(i % j == 0) 
Prime = 0;
}
if(Prime) factor = i;
}
printf("Largest prime factor is %d", factor);
getch();
return 0;
}}