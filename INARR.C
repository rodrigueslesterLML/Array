#include <conio.h>

void input(int *a,int i,int n)
{
   if(i<n)
    {
	scanf("%d", &a[i]);
	input(a,i+1,n);
    }
}

void output(int *a,int i,int n)
{
     if(i<n)
    {
	printf("%d  ", a[i]);
	output(a,i+1,n);
    }
}



void main()
{
    int a[1000],i,n;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter %d elements in the array :\n ", n);
    input(a,0,n);
    printf("\nElements in array are: ");
    output(a,0,n);

    getch();
}