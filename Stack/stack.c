#include "stack.h"
#include <stdio.h>

void stack_init(stack *s) {
    s->top = -1;
}

int stack_empty(stack *s) {
    return (s->top == -1);
}

int stack_full(stack *s) {
    return (s->top == STACK_SIZE - 1);
}

int stack_top(stack *s) {
    if (stack_empty(s)) {
        fprintf(stderr, "Error: Stack is empty\n");
        return -1;  // Indicating error
    }
    return s->data[s->top];
}

void stack_push(stack *s, int x) {
    if (stack_full(s)) {
        fprintf(stderr, "Error: Stack overflow\n");
        return;
    }
    s->data[++s->top] = x;
}

void stack_pop(stack *s) {
    if (stack_empty(s)) {
        fprintf(stderr, "Error: Stack underflow\n");
        return;
    }
    s->top--;
}
