#ifndef __STACK_H__
#define __STACK_H__

#include <stdbool.h>

#define STACK_SIZE 100

typedef struct stack {
    int data[STACK_SIZE];
    int top;
} stack;

void stack_init(stack *s);
int stack_empty(stack *s);
int stack_full(stack *s);
int stack_top(stack *s);
void stack_push(stack *s, int data);
void stack_pop(stack *s);

#endif // __STACK_H__
