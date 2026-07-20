#include<stdio.h>
void main()
{
   int a[20],i,n,sum=0;
   float avg;

   printf("enter limit:");

   scanf("%d",&n);
   for(i=0;i<n;i++)
   {

   printf("\n enter value %d:",i+1);
   scanf("%d",&a[i]);

   sum=sum+a[i];


   }
    avg=(float)sum/n;


   printf("\n entered values are as follows\n");

   for(i=0;i<n;i++)
   {
       printf("\n on the position %d value is %d",i+1,a[i]);
   }
       printf("\n sum is :%d ",sum);
        printf("\n avg is :%.2f ",avg);
}
