## PMath(ProfessionalMathematics), Version 0.2

### What Is PMath?
#### PMath Is An Open Source Professional Library Of Matehmatics For C.

---

### How To Use?
#### For Using PMath In Your Project, First You Have To Clone PMath Repo In Your Project
`git clone https://github.com/ABOLFAZLMOHAMMADPOUR/PMathForC.git`

`git clone https://gitlab.com/ABOLFAZLMOHAMMADPOUR/PMathForC.git`
#### And Then You Have To Include PMath In Main File Of Your Project.
```
Project
└─ Source
   └─ main.c
└─ Include
   └─ PMath.h
   └─ PMathError.h
└─ Build
   └─ MakeFile
└─ Output
   └─ main.exe
```
Source/main.c
```c
#include <stdio.h>

#include "./../Include/PMath.h"

int main(int argc, const char *argv[])
{
    return (int)0;
}
```

---

### How To Compile And Run Project
#### First You Have To Change The Current Directory To The Build Directory And Then Do Following Commands.
Build/MakeFile(Windows)
```MakeFile
.DEFAULT_GOAL := CreateAndRunExecutableOutput

CreateAndRunExecutableOutput:
	@ gcc .\..\Source\main.c -o .\..\Output\main.exe
	@ .\..\Output\main.exe

CreateExecutableOutput:
	@ gcc .\..\Source\main.c -o .\..\Output\main.exe

RunExecutableOutput:
	@ .\..\Output\main.exe
```
Build/MakeFile(Linux)
```MakeFile
.DEFAULT_GOAL := CreateAndRunExecutableOutput

CreateAndRunExecutableOutput:
	@ gcc .\..\Source\main.c -o .\..\Output\main.out
	@ .\..\Output\main.out

CreateExecutableOutput:
	@ gcc .\..\Source\main.c -o .\..\Output\main.out

RunExecutableOutput:
	@ .\..\Output\main.out
```

(Windows)          `mingw32-make -f .\MakeFile`

(Linux)            `make -f ./MakeFile`

---

### Working With PMath
#### PMath Is Contains Lots Of Functions Which You Can Doing Mathematics Operations With Them In Your Project.
---

### Calculating Number Of Divisors Of A Number With PMath
Source/main.c
```c
#include <stdio.h>

#include "./../Include/PMath.h"

int main(int argc, const char *argv[])
{
    long long int Number = (long long int)27;
    long long int NumberOfDivisors;

    Calculating_NumberOfDivisors(Number, &NumberOfDivisors);

    printf("%s%lld%s%lld%c", "Number Of Divisors Of {", Number, "} Is : ", NumberOfDivisors, '\n');

    return (int)0;
}
```
Output/main.out
```
Number Of Divisors Of {27} Is : 4
```

---

### Calculating Divisors Of A Number With PMath
Source/main.c
```c
#include <stdio.h>

#include "./../Include/PMath.h"

int main(int argc, const char *argv[])
{
    long long int Number = (long long int)27;
    long long int NumberOfDivisors;

    Calculating_NumberOfDivisors(Number, &NumberOfDivisors);

    long long int Divisors[NumberOfDivisors] = {(long long int)0};

    Calculating_Divisors(Number, Divisors);

    printf("%s%lld%s%lld%c", "Number Of Divisors Of {", Number, "} Is : ", NumberOfDivisors, '\n');

    printf("%s%lld%s", "Divisors Of {", Number, "} Are : [ ");
    for (long long int Counter = (long long int)0; Counter < NumberOfDivisors; Counter++)
    {
        printf("%lld%c", (*(Divisors + Counter)), ' ');
    }
    printf("%c%c", ']', '\n');

    return (int)0;
}
```
Output\main.out
```
Number Of Divisors Of {27} Is : 4
Divisors Of {27} Are : [ 1 3 9 27 ]
```

---

### Calculating Multiples Of A Number With PMath
Source/main.c
```c
#include <stdio.h>

#include "./../Include/PMath.h"

int main(int argc, const char *argv[])
{
    long long int Number = (long long int)10;
    long long int From = (long long int)-5;
    long long int To = (long long int)4;
    long long int Multiples[(long long int)10] = {(long long int)0};

    Calculating_Multiples(Number, From, To, Multiples);

    printf("%s%lld%s%lld%s%lld%s", "Multiples Of {", Number, "} From <", From, "> To <", To, "> Are : [");
    for (long long int Counter = (long long int)0; Counter < (long long int)10; Counter++)
    {
        printf("%lld%c", Multiples[Counter], ' ');
    }
    printf("%s%c", "]", '\n');

    return (int)0;
}
```
Output/main.out
```
Multiples Of {10} From <-5> To <4> Are : [-50 -40 -30 -20 -10 0 10 20 30 40 ]
```

---

### Calculating ArithmeticMean Of Numners With PMath
Source/main.c
```c
#include <stdio.h>

#include "./../Include/PMath.h"

int main(int argc, const char *argv[])
{
    long long int NumberOfNumbers = (long long int)5;
    long double Numbers[5] = {(long double)10.0, (long double)20.0, (long double)30.0, (long double)37.6, (long double)85.3};
    long double TheArithmeticMean = (long double)0.0;

    printf("%s", "The Arithmetic Mean Of (");
    for (long long int Counter = (long long int)0; Counter < NumberOfNumbers; Counter += (long long int)1)
    {
        if (((Counter + (long long int)1) == NumberOfNumbers))
        {
            printf("%Lf%s", Numbers[Counter], ")");
        }
        else
        {
            printf("%Lf%s", Numbers[Counter], ", ");
        }
    }
    printf("%s", " Is : ");

    TheArithmeticMean = Calculating_ArithmeticMean(Numbers, NumberOfNumbers);
    printf("%Lf%c", TheArithmeticMean, '\n');

    return (int)0;
}
```
Output/main.out
```
The Arithmetic Mean Of (10.000000, 20.000000, 30.000000, 37.600000, 85.300000) Is : 36.580000
```

---

### Calculating WeightedArithmeticMean Of Numners With PMath
Source/main.c
```c
#include <stdio.h>

#include "./../Include/PMath.h"

int main(int argc, const char *argv[])
{
    long long int NumberOfNumbers = (long long int)5;
    long double Numbers[5] = {(long double)10.0, (long double)20.0, (long double)37.0, (long double)86.2, (long double)3.7};
    long double WeightOfNumbers[5] = {(long double)2.0, (long double)8.0, (long double)3.0, (long double)6.0, (long double)4.0};
    long double TheWeightedArithmeticMean = (long double)0.0;

    printf("%s", "The WeightedArithmeticMean Of (");
    for (long long int Counter = (long long int)0; Counter < NumberOfNumbers; Counter += (long long int)1)
    {
        if (((Counter + (long long int)1) == NumberOfNumbers))
        {
            printf("%Lf%s", Numbers[Counter], ")");
        }
        else
        {
            printf("%Lf%s", Numbers[Counter], ", ");
        }
    }
    printf("%s", " With These Weights ");
    printf("%s", "(");
    for (long long int Counter = (long long int)0; Counter < NumberOfNumbers; Counter += (long long int)1)
    {
        if (((Counter + (long long int)1) == NumberOfNumbers))
        {
            printf("%Lf%s", WeightOfNumbers[Counter], ")");
        }
        else
        {
            printf("%Lf%s", WeightOfNumbers[Counter], ", ");
        }
    }
    printf("%s",") Is : ");

    TheWeightedArithmeticMean = Calculating_WeightedArithmeticMean(Numbers, WeightOfNumbers, NumberOfNumbers);
    printf("%Lf%c", TheWeightedArithmeticMean, '\n');

    return (int)0;
}
```
Output/main.out
```
The WeightedArithmeticMean Of (10.000000, 20.000000, 37.000000, 86.200000, 3.700000) With These Weights (2.000000, 8.000000, 3.000000, 6.000000, 4.000000)) Is : 35.782609
```

---





