#include <stdio.h>
#include <stdlib.h>

#define No_Error (unsigned short int)1383
#define Error_1384 (unsigned short int)1384
#define Error_1385 (unsigned short int)1385
#define Error_1386 (unsigned short int)1386
#define Error_1387 (unsigned short int)1387
#define Error_1388 (unsigned short int)1388
#define Error_1389 (unsigned short int)1389
#define Error_1390 (unsigned short int)1390
#define Error_1391 (unsigned short int)1391
#define Error_1392 (unsigned short int)1392
#define Error_1393 (unsigned short int)1393

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
    case Error_1386:
    {
        printf("%c%s%c", '\a', "Error: From <Calculating_Multiples> \"The Argument <Number> Does Not Have To Be Zero\".", '\n');
        break;
    }
    case Error_1387:
    {
        printf("%c%s%c", '\a', "Error: From <Calculating_Multiples> \"The Argument <From> Does Not Have To Be Greater Than Argument <To> Or Equal\".", '\n');
        break;
    }
    case Error_1388:
    {
        printf("%c%s%c", '\a', "Error: From <Calculating_ArithmeticMean> \"The Argument <NumberOfNumbers> Does Not Have To Be Zero\".", '\n');
        break;
    }
    case Error_1389:
    {
        printf("%c%s%c", '\a', "Error: From <Calculating_ArithmeticMean> \"The Argument <NumberOfNumbers> Does Not Have To Be Lesser Than One\".", '\n');
        break;
    }
    case Error_1390:
    {
        printf("%c%s%c", '\a', "Error: From <Calculating_WeightedArithmeticMean> \"The Argument <NumberOfNumbers> Does Not Have To Be Zero\".", '\n');
        break;
    }
    case Error_1391:
    {
        printf("%c%s%c", '\a', "Error: From <Calculating_WeightedArithmeticMean> \"The Argument <NumberOfNumbers> Does Not Have To Be Lesser Than One\".", '\n');
        break;
    }
    case Error_1392:
    {   
        printf("%c%s%c", '\a', "Error: From <Calculating_GeometricMean> \"The Argument <NumberOfNumbers> Does Not Have To Be Zero\".", '\n');
        break;
    }
    case Error_1393:
    {
        printf("%c%s%c", '\a', "Error: From <Calculating_GeometricMean> \"The Argument <NumberOfNumbers> Does Not Have To Be Lesser Than One\".", '\n');
        break;
    }
    default:
    {
        printf("%c%s%c", '\a', "Error: The Errro Code Not Supported.", '\n');
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