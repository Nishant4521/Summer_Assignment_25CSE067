#include <stdio.h>
#include<conio.h>
int main() {
 int initial,final,i,j,count;
printf("Enter the value of initial number");
scanf("%d", &initial);
printf("Enter the value of final number");
scanf("%d", &final);
printf("Prime numbers in the range are: ");
for (i = initial; i <= final; i++) 
{  if (i<2) {
continue;
}
count=0;
for (j = 1; j<= i; j++) {
if (i % j == 0) {
count++;
}}
if (count == 2) {
printf("%d", i);
}}
printf("\n");
return 0;
}