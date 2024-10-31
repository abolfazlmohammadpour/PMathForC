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

// This Function Calculates Multiples Of Argument Number From Argument <From> To Argument <To> And Places Them In Argument <Multiples>
void Calculating_Multiples(long long int Number, long long int From, long long int To, long long int *Multiples)
{
    if (Number == (long long int)0)
    {
        Exiting_WithError(Error_1386);
        return;
    }
    else if (Number > (long long int)0)
    {
        if (From >= To)
        {
            Exiting_WithError(Error_1387);
            return;
        }
        else
        {
            long long int IndexOfMultiple = (long long int)0;

            for (long long int Counter = From; Counter <= To; Counter++)
            {
                *(Multiples + IndexOfMultiple) = (Number * Counter);
                IndexOfMultiple++;
            }
            return;
        }
    }
    else
    {
        if (From >= To)
        {
            Exiting_WithError(Error_1387);
            return;
        }
        else
        {
            long long int IndexOfMultiple = (long long int)0;

            for (long long int Counter = From; Counter <= To; Counter++)
            {
                *(Multiples + IndexOfMultiple) = (Number * Counter);
                IndexOfMultiple++;
            }
            return;
        }
    }
}

// This Function Will Calcuate Arithmetic Mean Of The Numbers List. At The First Argument This Function Will Take The List Of Numbers And In The Second Will Take The Length Of The List Of Numbers And Finally Will Return The Arithmetic Mean
long double Calculating_ArithmeticMean(long double *Numbers, long long int NumberOfNumbers)
{
    if (NumberOfNumbers == (long long int)0)
    {
        Exiting_WithError(Error_1388);
        return (long double)0.0;
    }
    else if (NumberOfNumbers < (long long int)0)
    {
        Exiting_WithError(Error_1389);
        return (long double)0.0;
    }
    else
    {
        long double SumOfNumbers = (long double)0.0;
        long double ArithmeticMeanOfNumbers = (long double)0.0;

        for (long long int Counter = (long long int)0; Counter < NumberOfNumbers; Counter += (long long int)1)
        {
            SumOfNumbers += *(Numbers + Counter);
        }

        ArithmeticMeanOfNumbers = SumOfNumbers / NumberOfNumbers;

        return ArithmeticMeanOfNumbers;
    }
}


long double Calculating_WeightedArithmeticMean(long double *Numbers, long double *WeightOfNumbers, long long int NumberOfNumbers)
{
    if (NumberOfNumbers == (long long int)0)
    {
        Exiting_WithError(Error_1390);
        return (long double)0.0;
    }
    else if (NumberOfNumbers < (long long int)0)
    {
        Exiting_WithError(Error_1391);
        return (long double)0.0;
    }
    else
    {
        long double SumOfNumbers = (long double)0.0;
        long double SumOfWeightOfNumbers = (long double)0.0;
        long double WeightedArithmeticMeanOfNumbers = (long double)0.0;

        for (long long int Counter = (long long int)0; Counter < NumberOfNumbers; Counter += (long long int)1)
        {
            SumOfNumbers += ((*(Numbers + Counter)) * (*(WeightOfNumbers + Counter)));
        }
        for (long long int Counter = (long long int)0; Counter < NumberOfNumbers; Counter += (long long int)1)
        {
            SumOfWeightOfNumbers += *(WeightOfNumbers + Counter);
        }

        WeightedArithmeticMeanOfNumbers = SumOfNumbers / SumOfWeightOfNumbers;

        return WeightedArithmeticMeanOfNumbers;
    }
}