#include<stdio.h>
 void main()
 {
     int a[3][3],b[3][3],c[3][3],i,j,k;

     printf("\n Enter Values for Matrix A\n");
     for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
     {

      printf("\n Enter Value [%d][%d]:",i,j);
      scanf("%d,&a[i][j]");
 }
     }
      printf("\n Enter Values for Matrix B\n");
     for(i=0;i<3;i++)

    {
        for(j=0;j<3;j++)
    {

         printf("\n Enter Value [%d][%d]:",i,j);
      scanf("%d,&b[i][j]");

    }
}
for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++)
 {

 c[i][j]=0;
 for(k=0;k<3;k++)
 {
   c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
      }
   }
 }






   printf("\n Matrix A  \n");
   for(i=0;i<3;i++)

   {
    for(j=0;j<3;j++)
{
    printf("%5d",a[i][j]);
}
printf("\n");
}

 printf("\nMatrix B\n");
for(i=0;i<3;i++)

{
    for(j=0;j<3;j++)

 {
    printf("%5d",b[i][j]);
}
printf("\n");
}
printf("\nMatrix C\n");
for(i=0;i<3;i++)

{
    for(j=0;j<3;j++)
{
    printf("%5d",c[i][j]);
}
printf("\n");
}
 for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++)
 {

 c[i][j]=0;
 for(k=0;k<3;k++)
 {
   c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
      }
   }
 }


 }
