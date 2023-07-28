#include <stdio.h>
#include <stdlib.h>

#define No_Error (unsigned short int)1383
#define Error_1384 (unsigned short int)1384
#define Error_1385 (unsigned short int)1385

unsigned short int PMathError = No_Error;

// This Function Showing Message Of PMathError
void Showing_PMathError(unsigned short int PMathError)
{
    switch (PMathError)
    {
    case No_Error:
    {
        break;
    }
    case Error_1384:
    {
        printf("%c%s%c", '\a', "Error: From <Calculating_NumberOfDivisors> \"The Argument <Number> Does Not Have To Be Zero\".", '\n');
        break;
    }
    case Error_1385:
    {
        printf("%c%s%c", '\a', "Error: From <Calculating_Divisors> \"The Argument <Number> Does Not Have To Be Zero\".", '\n');
        break;
    }
    }
}

// This Function Showing Message Of PMathError And Close The Program
void Exiting_WithError(unsigned short int Error)
{
    PMathError = Error;

    Showing_PMathError(PMathError);

    exit((int)-1);
}