//insert a value using user defined position
#include <stdio.h>

void main()
{
    int a[5], n, i, pos, item;


    printf("Enter the size of array: ");
    scanf("%d", &n);


    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }


    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter the element to insert: ");
    scanf("%d", &item);


    if(pos < 1 || pos > n + 1)
    {
        printf("Invalid Position!\n");
    }
    else
    {
        for(i = n; i >= pos; i--)
        {
            a[i] = a[i - 1];
        }

        a[pos - 1] = item;
        n++;


        printf("Array after insertion:\n");
        for(i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }


}












