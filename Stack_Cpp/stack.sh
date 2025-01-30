#!/bin/zsh

# Set the compiler
CXX="clang++"

# Source files
STACK_SRC="stack.cpp"
POSTFIX_SRC="postfix.cpp"
REVERSE_SRC="reverseString.cpp"

# Output executables
POSTFIX_EXE="postfix"
REVERSE_EXE="reverseString"

# Compile stack.cpp into an object file
echo "Compiling stack.cpp..."
$CXX -c $STACK_SRC -o stack.o || { echo "Compilation failed for stack.cpp"; exit 1; }

# Compile postfix.cpp
echo "Compiling postfix.cpp..."
$CXX stack.o $POSTFIX_SRC -o $POSTFIX_EXE || { echo "Compilation failed for postfix.cpp"; exit 1; }

# Compile reverseString.cpp
echo "Compiling reverseString.cpp..."
$CXX stack.o $REVERSE_SRC -o $REVERSE_EXE || { echo "Compilation failed for reverseString.cpp"; exit 1; }

# Run postfix evaluation
echo "\nRunning postfix evaluation..."
./$POSTFIX_EXE

# Run reverse string program
echo "\nRunning reverse string reversal..."
./$REVERSE_EXE

# Cleanup
rm -f stack.o $POSTFIX_EXE $REVERSE_EXE

echo "\nBuild and execution complete."
