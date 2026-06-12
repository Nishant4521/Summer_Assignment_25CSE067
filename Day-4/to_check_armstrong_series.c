#include <stdio.h>
#include <conio.h>
int main() {
int inputNum,backupNum,finalDigit;
int Sum = 0;
printf("Enter any integer to check");
scanf("%d", &inputNum);
backupNum = inputNum;
while (backupNum > 0) {
finalDigit = backupNum % 10;
Sum = Sum + (finalDigit * finalDigit * finalDigit);
backupNum = backupNum / 10;
}
if (Sum == inputNum) {
printf("%d is a valid Armstrong number.\n", inputNum);
} else {
printf("%d is not an Armstrong number.\n", inputNum);
}
getch();
return 0;
}