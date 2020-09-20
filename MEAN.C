#include <stdio.h>
#include<conio.h>
void main() {
    int n, i;
    float num[100], sum = 0.0, avg;
    clrscr();
    printf("Enter the numbers of elements: ");
    scanf("%d", &n);


    for (i = 0; i < n; ++i) {
	printf("%d. Enter number: ", i + 1);
	scanf("%f", &num[i]);
	sum += num[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg);
    getch();
}