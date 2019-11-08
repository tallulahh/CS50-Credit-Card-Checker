#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long long CCInput;//card number
    long long CCCalc[16];
    char *CardType = NULL;
    long long even_index = 0;//index even
    long long times_2;//sum of all even number index including 0
    long long sum_times_2;//that sum * 2
    long long odd_index;//sum of other numbers
    long long total_sum;//sum of both sums

    printf("Please enter Credit Card number: \n");
    CCInput = get_long_long();
    CCCalc[even_index] = CCInput;
    if (CCCalc[even_index] == 3)
    {
        CardType = "AMEX\n";
    }
    else if (CCCalc[even_index] == 5)
    {
        CardType = "MASTERCARD\n";
    }
    else if (CCCalc[even_index] == 4)
    {
        CardType = "VISA\n";
    }
    else
    {
        CardType = "INVALID\n";
    }
    for (even_index = 0; even_index <16; even_index++)
    {
        if ((even_index % 2 == 0) || (even_index == 0))
        {
            times_2 = CCCalc[even_index] * 2;
            sum_times_2 = sum_times_2 + times_2;

        }
        else
        {
            odd_index = odd_index + CCCalc[even_index];

        }
    }
    total_sum = sum_times_2 + odd_index;

    if (total_sum % 10 == 0)
    {
        printf("%s \n", CardType);
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}