# Soft Rules

Design philosophy, implementation guidance, and agent behavior. These are judgement-based — they describe *how* to write good code, not *what* the code should look like.

---

## Comments & Documentation

- Write self-documenting code that clearly describes what it does through naming and structure.
- Comments should explain information not obvious enough through naming and structure.
- Comments should not include any unnecessary symbols.
- Prefer doxygen-style @brief when possible, followed by @details for function documentation.
- Document the code not the project.
- Choose descriptive names when writing code. No abbreviations anywhere.
- Comments should explain why, not what — the code itself should make the "what" obvious.

---

## Constants & Magic Numbers & Globals

- Use constexpr variables or strongly typed enums for all constants. No magic numbers.
- Use fixed-width integer types (`int32_t`, `uint64_t`, etc.) to ensure explicit size and signedness when possible.
- Everything is `const` or `constexpr` by default, unless there is reason for mutation.
- Previous principle applies to everything that can be made `const` or `constexpr`.
- Non-const globals should not exist. Choose const globals or local variables.

---

## Function Design

- **Guard clauses (return early):** Validate preconditions at the top of a function. Return or throw immediately on failure, keeping the happy path at the end and preventing deep nesting. Use assertions.
- Every function must validate its parameters.
- Each function must contain at least one runtime assertion to catch unexpected conditions and document assumptions.
- Functions _must_ be minimally nested — no more than 4 levels of nesting.
- A single function must not exceed 60–70 lines of logical code, unless it consists primarily of `switch`/`case` logic.
- Keep functions short enough that they can be reviewed, understood, and verified easily.
- Every non-void function's return value must be examined by its caller.

---

## Class Design

- **Single-Responsibility Principle (SRP):** A class should have only _one_ reason to change.
- **DRY:** Both SRP and DRY are tools for achieving maintainability and simplifying change — not goals in themselves. If separation produces adverse effects, do not implement it.

---

## Design Principles

- **SRP** applies to both classes, files and functions.
- Always have an upper bound for any loop or runtime-bounded iteration (including `while` loops and message queues) to prevent infinite loops and runtime failures.
- When parallel task execution is possible, always ask whether it should be done.
- Complexity is anything related to the structure of a software system that makes it hard to understand and modify the system. Minimize complexity based on this understanding of complexity.
- A single source file must not exceed 500 lines of code. Divide and subdivide classes and functions to stay within this limit.
- Make invalid states impossible to represent. Always have a clear, well-defined boundary between valid and invalid states and nest state checks appropriately.
- Assign one clear job to each code unit. In most cases, a single function should carry one main action, a class should represent one role.
- Limit variable scope to be as local as possible.
- Choose descriptive names when writing clean code. No abbreviations anywhere.

---

## Agent Behaviour

### Clarify Before Acting

- If multiple interpretations exist, present them — don't pick silently.
- If something is unclear, stop. Name what's confusing. Ask.
- Clarifying questions come before implementation, not after mistakes.
- If two rules overlap ask and don't pick silently.

### Simplicity First

- Write the minimum code that solves the problem. Nothing speculative.
- No features beyond what was asked.
- No abstractions for single-use code.
- No error handling for impossible scenarios.
- If you write 200 lines and it could be 50, rewrite it.
- If a simpler approach exists, say so. Push back when warranted.

Ask yourself: _"Would a senior engineer say this is overcomplicated?"_ If yes, simplify.

### Cleanup After Changes

When your changes create orphans:

- Remove imports, variables, and functions that **your** changes made unused.
- Do not remove pre-existing dead code unless explicitly asked.
- No need to build and test, I will provide the feedback.

### Success Criteria

These guidelines are working if:

- Diffs contain fewer unnecessary changes.
- Rewrites due to overcomplication are rare.
- Clarifying questions come before implementation, not after mistakes.
