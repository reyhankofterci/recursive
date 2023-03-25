#include <stdio.h>
#include <stdlib.h>


/*calculate the sum of all numbers(including this number) up
to a natural number given in the main function using a recursive function*/

void list(int num)
    {
        if(num==0)
        {
            printf("%d",num);
        }
        else
        {
            printf("%d\n",num);
            list(num-1);
        }
    }

int collect(int num)
{
    if (num==0)
    {
        return 0;
    }
    else
    {
        return num+collect(num-1);
    }
}




int main()
{

    int n;

    printf("Enter a natural number:");
    scanf("%d",&n);
    list(n);
    printf("\nTotal: %d",collect(n));


    return 0;
}
