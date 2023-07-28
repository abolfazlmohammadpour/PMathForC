#include "./PMathError.h"

// This Function Calculates The Number Of Divisors Of The Argument <Number> And Places It In Value Of Argument <NumberOfDivisors>
void Calculating_NumberOfDivisors(long long int Number, long long int *NumberOfDivisors)
{
    *NumberOfDivisors = (long long int)0;

    if (Number == (long long int)0)
    {
        Exiting_WithError(Error_1384);
        return;
    }
    else if (Number > (long long int)0)
    {
        for (long long int Counter = (long long int)1; Counter <= Number; Counter++)
        {
            if ((Number % Counter) == (long long int)0)
            {
                *NumberOfDivisors += (long long int)1;
            }
        }
        return;
    }
    else
    {
        for (long long int Counter = (long long int)1; Counter <= (-Number); Counter++)
        {
            if ((Number % Counter) == (long long int)0)
            {
                *NumberOfDivisors += (long long int)1;
            }
        }
        return;
    }
}

// This Function Calculates Divisors Of Argument <Number> And Places Them In Argument <Divisors>
void Calculating_Divisors(long long int Number, long long int *Divisors)
{
    long long int IndexOfDivisor = (long long int)0;

    if (Number == (long long int)0)
    {
        Exiting_WithError(Error_1385);
        return;
    }
    else if (Number > (long long int)0)
    {
        for (long long int Counter = (long long int)1; Counter <= Number; Counter++)
        {
            if ((Number % Counter) == (long long int)0)
            {
                *(Divisors + IndexOfDivisor) = Counter;
                IndexOfDivisor++;
            }
        }
        return;
    }
    else
    {
        for (long long int Counter = (long long int)1; Counter <= (-Number); Counter++)
        {
            if ((Number % Counter) == (long long int)0)
            {
                *(Divisors + IndexOfDivisor) = Counter;
                IndexOfDivisor++;
            }
        }
        return;
    }
}