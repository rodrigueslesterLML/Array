#include <stdio.h>
 #include <conio.h>
void main()
 {
     int array1 [100], i, number , j, flag=0;
     clrscr ();
     printf("\n Enter the size of the array:");
     scanf ("%d", &number);
     printf("\n Enter %d elements of the array:\n",number);
     for(i=0;i<number;i++)
	{
	    scanf("%d", &array1[i]);
	}
     for(i=0;i<number;i++)
	{
	   for(j= i+1;j<number;j++)
	      {
		 if(array1[i] == array1[j] )
		   {
			flag=1;
			printf("\n Duplicate number %d found at location %d and %d", array1 [i],i+1, j+1);
		   }
	     }
       }
	if (flag==0)
	   {
		printf ("\n No Duplicate");
	   }
	 getch();



 }