
#include <stdio.h>
void main()
{
    int A[3], B[3], C[6];
    int i,j=0;



   for(i = 0; i < 3; i++)

   {

    printf("\nEnter elements %d:",i+1);
     scanf("%d", &A[i]);
   }

    for(i = 0; i < 3; i++)
   {

    printf("\nEnter elements %d:",i+1);
     scanf("%d", &B[i]);
    }


    for(i = 0; i < 3; i++)
    {
        C[j] =A[i];
        j++;
    }


    for(i = 0; i < 3; i++)
    {
        C[j] =B[i];
        j++;

    }


    printf("Merged array :\n");
    for(i = 0; i < 6; i++)
    {
        printf("\n %d ", C[i]);
      }
}-
