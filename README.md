## PMath(ProfessionalMathematics), Version 0.1

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
Output/main.exe
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
Output\main.exe
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
Output/main.exe
```
Multiples Of {10} From <-5> To <4> Are : [-50 -40 -30 -20 -10 0 10 20 30 40 ]
```

---




