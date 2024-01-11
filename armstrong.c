// armstrong
#include <stdio.h>
#include <math.h>

int main()
{
    int num, val, rem, sum = 0, a = 0;

    printf("Please enter an integer : ");
    // Taking the user input
    scanf("%d", &num);

    val = num;

    while (val != 0) // Finding the numbers of digits in a given number
    {
        val = val / 10;
        ++a;
    }

    val = num;

    while (val > 0) // Calculate the number to check  it is Armstrong or not
    {
        rem = val % 10;
        sum = sum + pow(rem, a);
        val = val / 10;
    }

    if (sum == num) // Check whether the sum is equal to the given number of not
    {
        printf(" % d is an Armstrong number \n ", num);
    }
    else
    {
        printf("%d is not an Armstrong number \n", num);
    }
    return 0;
}