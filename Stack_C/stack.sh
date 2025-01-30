#!/bin/zsh

# Set the compiler
CC="clang"

# Source files
STACK_SRC="stack.c"
POSTFIX_SRC="postfix.c"
REVERSE_SRC="reverseString.c"

# Output executables
POSTFIX_EXE="postfix"
REVERSE_EXE="reverseString"

# Compile stack.c only once (object file)
echo "Compiling stack.c..."
$CC -c $STACK_SRC -o stack.o || { echo "Compilation failed for stack.c"; exit 1; }

# Compile postfix.c
echo "Compiling postfix.c..."
$CC stack.o $POSTFIX_SRC -o $POSTFIX_EXE || { echo "Compilation failed for postfix.c"; exit 1; }

# Compile reverseString.c
echo "Compiling reverseString.c..."
$CC stack.o $REVERSE_SRC -o $REVERSE_EXE || { echo "Compilation failed for reverseString.c"; exit 1; }

# Run postfix evaluation
echo "\nRunning postfix evaluation..."
./$POSTFIX_EXE

# Run reverse string program
echo "\nRunning reverse string reversal..."
./$REVERSE_EXE

# Cleanup
rm -f stack.o $POSTFIX_EXE $REVERSE_EXE

echo "\nBuild and execution complete."
