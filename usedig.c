/*WAP to enter n number of digits. Form a number using these digits.*/
#include <stdio.h>

void main() {
	   int n;int i;	int tmp;
	    int number = 0;
    printf("Enter number of digits: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
	printf("Enter a digit: ");
	scanf("%d", &tmp);
	number = number*10+tmp;
    }
    printf("Your number is %d\n", number);
  getch();
}
