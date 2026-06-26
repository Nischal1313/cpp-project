## Important

1. Be very systematic in your approach - reading all rules first, creating a checklist, and methodically applying each
   rule to ensure nothing is missed.

## Additional C++ coding style guideline

- **CS-001** Open bracket of a class declaration starts on the next line (also for struct and enum)
- **CS-002** Class and struct data members name will be terminated with letter 'M'
- **CS-003** Function parameters name will be terminated with letter 'P'
- **CS-004** Static variables name will be terminated with letter 'S'
- **CS-005** Global variables name will be terminated with letter 'G'
- **CS-006** Do not prefix enum values with 'k'
- **CS-007** Function open bracket should start on next line. Applies also to inline methods and functions.
- **CS-008** Open bracket should start on next new line for following keywords: if/else, while, for, switch
- **CS-009** Function names and parameter names should be camel case
- **CS-010** Variable names should be camel case
- **CS-011** Pointer type variables must be prefixed with 'p' (raw pointers or smart pointers)
- **CS-012** Reference type variables must be prefixed with 'r'
- **CS-013** constant names must be upercase and not prefixed with 'k'
- **CS-014** Camel case naming should be applied to:
    - class data members, methods name, methods parameters
    - struct data members, methods name, methods parameters
    - union data members, methods name, methods parameters
    - constants must be upper case and snake case
    - global variables, static variables, local variables
    - function names which are not part of class, struct or union
- **CS-015** Do not apply this coding guideline to third party source code
- **CS-016** Indentation size is four space characters
- **CS-017** Source file extension is .cpp
- **CS-018** Instead of #define guards use "#pragma once"
- **CS-019** For global functions and variables use anonymous namespace
- **CS-020** Friends are allowed to be used only in tests, not in production code
- **CS-021** Put the const keyword so that it follows the object it's describing, like:

```
    int const* pInt;
```
which means 'pInt' it's a pointer to a constant int

## Refactoring rules

- **CS-022** When variables names are renamed make sure that function names are not renamed also if they contain same name
- **CS-023** When function names are renamed make sure that variable names are not renamed also if they contain same name
- **CS-024** Third party libraries variables and functions should not be changed according to coding style defined here

## Others

- **CS-025** Functions should have only one exit point. Use a variable with name "result" to store the result and return it at the end.
- **CS-026** If the function body has no branching instructions (if, switch, ...) then no need to have a variable to store the return value. The return can directly return the expression (including ternary expressions).
- **CS-027** Comments in header files should use format /** */ for one line or multi line. For cpp file should use //.
- **CS-028** Use double quotes (`""`) for `#include` directives only when the included header is in the same local folder as the including file. Use angle brackets (`<>`) when the included header is referenced relative to a parent or project include directory (e.g., `<message/request/request_message_base.h>`).
- **CS-029** Use uniform initializer for variables and data members
- **CS-030** Use following principles when designing solutions: SOLID, RAII
- **CS-031** Whenever a union type is needed to be used, use a std::variant with following constraints: avoid throwing exceptions and avoid to increase the code size (no std::visit or anything else that can increase code size)
