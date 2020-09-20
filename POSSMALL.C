#include<stdio.h>
#include<conio.h>
#define MAX 100
void main() {
   int a[MAX], i, num, smallest;
   int pos=0;
   int dup=-1;
   clrscr();
   printf("\nEnter no of elements :");
   scanf("%d", &num);
   printf("Enter %d elements",num);
   //Read n elements in an array
   for (i = 0; i < num; i++)
     {
     scanf("%d", &a[i]);
     }
   //Consider first element as smallest
   smallest = a[0];

   for (i = 1; i <num; i++) {
      if (a[i] < smallest)
      {
	 smallest = a[i];
	 pos=i;
      }
      if(a[i]==smallest)
      {
      dup=i;
      }
   }

   // Print out the Result
   printf("\nSmallest Element is : %d", smallest);
   printf("\nSmallest Element is at position: %d",pos);
   if(dup!=-1)
   {
   printf("\nSmallest Element repeated at position: %d",dup);
  }
     getch();

}