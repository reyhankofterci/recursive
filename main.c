#include <stdio.h>
#include <stdlib.h>


/*write a recursion function to sum the digits
  of the number given in the main function*/




int main()
{
    int num;
    int result;

    printf("Enter the number: ");
    scanf("%d", &num);
    result = total(num);
    printf("Sum of digits in %d = %d\n", num, result);
    return 0;
}

int total (int num)
{
    if (num != 0)
    {
        return (num % 10 + total(num / 10));
    }
    else
    {
       return 0;
    }
}
