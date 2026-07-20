#include <stdio.h>
void main()
{
    int A[20], B[20], C[60];
    int i,j=0;
    int m[20],n[20];

    for(i = 0; i < 20; i++)
  {


    printf("\nEnter value of m %d:",i+1);
    scanf("%d", &m[i]);
  }


    for(i = 0; i < 20; i++)
  {


    printf("\nEnter value of n %d:",i+1);
    scanf("%d", &n[i]);
  }

   for(i = 0; i < 20; i++)

   {

    printf("\nEnter elements %d:",i+1);
     scanf("%d", &A[i]);
   }

    for(i = 0; i < 20; i++)
   {

    printf("\nEnter elements %d:",i+1);
     scanf("%d", &B[i]);
    }


    for(i = 0; i < 20; i++)
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
    for(i = 0; i < 60; i++)
    {
        printf("\n %d ", C[i]);
      }
}
2

