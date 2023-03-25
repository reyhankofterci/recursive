#include <stdio.h>
#include <stdlib.h>

/*write a recursion program that finds the largest
 element in the entered array in C language.*/

int main()
{
    int n;
    int array[100];
    printf("Please enter the number of elements(1-100): ");
    scanf("%d",&n);

    for (int i = 0; i < n; ++i)
    {
        printf("%d.Number: ", i + 1);
        scanf("%d", &array[i]);
    }

    for (int i = 1; i < n; ++i)
    {
        if (array[0] < array[i])
        {
        array[0] = array[i];
        }
    }

    printf("The biggest element: %d",array[0]);

    return 0;

}
