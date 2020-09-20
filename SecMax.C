/* C program to find second largest number in an array*/
#include <stdio.h>
#define MAX_SIZE 1000     // Maximum array size

void main()
{
    int arr[MAX_SIZE], size, i;
    int max1, max2;
    clrscr();
    /* Input size of the array */
    printf("Enter size of the array (1-1000): ");
    scanf("%d", &size);

    /* Input array elements */
    printf("Enter elements in the array:\n ");
    for(i=0; i<size; i++)
    {
	scanf("%d", &arr[i]);
    }

    max1 = max2 = arr[i];


    /*
     * Check for first largest and second
     */
    for(i=1; i<size; i++)
    {
	if(arr[i] > max1)
	{
	    /*
	     * If current element of the array is first largest
	     * then make current max as second max
	     * and then max as current array element
	     */
	    max2 = max1;
	    max1 = arr[i];
	}
	else if(arr[i] > max2 && arr[i] < max1)
	{
	    /*
	     * If current array element is less than first largest
	     * but is greater than second largest then make it
	     * second largest
	     */
	    max2 = arr[i];
	}
    }


    printf("Second largest element is = %d", max2);
    getch();

}
