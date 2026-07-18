# Hard Rules

Binary, automatable, formatting/structure rules. These are checkable — each one is a yes/no.

---

## Memory & Ownership

- **Strict RAII:** No raw `new` or `delete`.
- Use `std::unique_ptr` for exclusive ownership.
- Use `std::shared_ptr` only when shared ownership is strictly required.

---

## Code Formatting & Structure

- **CS-001** The opening bracket of a class, struct, or enum declaration starts on the next line.
- **CS-007** A function's opening bracket starts on the next line. Applies to inline methods and functions.
- **CS-008** Opening bracket starts on the next line for: `if`, `else`, `while`, `for`, `switch`.
- **CS-016** Indentation size is four space characters.
- **CS-017** Source file extension is `.cpp`.
- **CS-018** Use `#pragma once` instead of `#define` include guards.
- **CS-021** Place the `const` keyword after the object it describes:
    ```cpp
    int const* pInt; // pointer to a constant int
    ```
- **CS-029** Use uniform initializers for variables and data members.

---

## Includes & Namespaces

- **CS-019** For global functions and variables, use an anonymous namespace.
- **CS-028** Use double quotes (`""`) for `#include` only when the header is in the same local folder as the including file. Use angle brackets (`<>`) when referencing a header relative to a parent or project include directory (e.g., `<message/request/request_message_base.h>`).

---

## Constants & Magic Numbers & Globals

- **CS-013** Constant names must be uppercase snake case.

---

## Function Design

- **CS-025** Functions must have only one exit point. Store the result in a variable named `result` and return it at the end.
- **CS-026** If a function body has no branching instructions (`if`, `switch`, etc.), the `return` may directly return the expression (including ternary expressions).

---

## Class Design

- **CS-020** Friends are allowed only in tests, not in production code.

---

## Design Principles

- **CS-030** Apply SOLID and RAII principles when designing solutions.

---

## Refactoring Rules

- **CS-015 / CS-024** Do not apply these coding guidelines to third-party source code. Do not rename third-party library variables or functions.
