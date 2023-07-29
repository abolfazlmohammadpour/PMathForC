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

(Windows)`mingw32-make -f .\MakeFile`

(Linux)`make -f ./MakeFile`

---