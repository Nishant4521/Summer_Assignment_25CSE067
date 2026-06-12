#include <stdio.h>
#include <conio.h>
int main() {
int start,end,i,temp,rem,sum;
printf("Enter the starting and ending limit");
scanf("%d %d", &start, &end);
printf("Armstrong numbers in the given range are");
for(i=start;i<=end;i++) {
temp=i;
sum=0;
while(temp>0) {
rem=temp%10;
sum =sum+(rem*rem*rem);
temp=temp/10;
}

if(sum == i) {
printf("%d ", i);
}
}
getch();
return 0;
}