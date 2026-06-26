# IMPORTANT: AI Assistant Workflow

Read CLAUDE.md and all related files and follow the rules very strictly.

## Mandatory Workflow Before Starting ANY Task

Before implementing ANYTHING, you MUST follow this protocol:

1. **Read all relevant rule files**
   - Read CLAUDE.md completely
   - Read docs/claude/additional_cpp_code_style.md if writing code
   - Read any other relevant documentation files

2. **Create a compliance checklist using TodoWrite**
   - Create a "Rules Compliance Checklist" with all requirements
   - Create an "Implementation Checklist" breaking down the task
   - Include verification steps for each rule

3. **Present checklist to user for confirmation**
   - Show the user what you plan to do
   - Wait for user approval before proceeding
   - Do NOT start implementation without confirmation

4. **Implement following the checklist**
   - Mark each todo as in_progress when starting
   - Mark as completed only when verified against rules
   - Update checklist as you discover additional requirements

5. **Final verification before presenting results**
   - Verify EVERY rule has been followed
   - Check the implementation against CLAUDE.md requirements
   - Do NOT present results until all rules are verified

## Example Workflow

```
User: "Create unit tests"

AI: "Before I start, let me read CLAUDE.md and create a checklist..."
[Reads CLAUDE.md, additional_cpp_code_style.md]

AI: [Uses TodoWrite to create checklist]:
    - Read CLAUDE.md and identify all testing rules
    - Read additional_cpp_code_style.md for code style
    - Verify directory structure requirements
    - Create tests/unittests/ directory
    - Generate test binaries in tests/bin/
    - Use Google Test framework
    - Update CMakeLists.txt following build system rules
    - Create run_tests.sh script with execute permissions
    - Update documentation in docs/claude/
    - Verify all rules before presenting

AI: "I've identified these requirements from CLAUDE.md:
    - Tests must be in tests/unittests/
    - Test binaries must be in tests/bin/
    - Must use Google Test framework
    - CMakeLists.txt: tests in 'tests' subfolder
    - Build artifacts must go to bin/ folder
    - Must follow Google C++ Style Guide + additional rules

    Do you want me to proceed with this approach?"

User: "Yes, proceed"

AI: [Implements, checking each rule]
AI: [Verifies all rules before presenting]
AI: "Done! Created unit tests following all CLAUDE.md rules..."
```

## Consequences of Not Following This Workflow

- **Wasted time** - User has to ask for corrections
- **Loss of trust** - Rules are documented but not followed
- **Frustration** - User explicitly requests strict rule following but gets non-compliant results
- **Rework** - Implementation must be corrected instead of done right the first time

## When Questioned About Your Work

If the user questions or corrects your work:

1. **Re-read the actual code** before claiming it was correct
2. **Do not be defensive** about your work
3. **Verify first, then respond** - never assume you did it right

## Remember

**The rules exist for a reason. Follow them systematically, not approximately.**