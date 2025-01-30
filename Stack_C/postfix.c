#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "stack.h"

int evaluatePostfix(char *s) {
    stack st;
    stack_init(&st);

    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        if (isdigit(s[i])) {
            stack_push(&st, s[i] - '0');
        } else {
            if (stack_empty(&st)) {
                fprintf(stderr, "Error: Invalid expression\n");
                return -1;
            }
            int a = stack_top(&st);
            stack_pop(&st);

            if (stack_empty(&st)) {
                fprintf(stderr, "Error: Invalid expression\n");
                return -1;
            }
            int b = stack_top(&st);
            stack_pop(&st);

            switch (s[i]) {
                case '+': stack_push(&st, b + a); break;
                case '-': stack_push(&st, b - a); break;
                case '*': stack_push(&st, b * a); break;
                case '/':
                    if (a == 0) {
                        fprintf(stderr, "Error: Division by zero\n");
                        return -1;
                    }
                    stack_push(&st, b / a);
                    break;
                default:
                    fprintf(stderr, "Error: Unknown operator '%c'\n", s[i]);
                    return -1;
            }
        }
    }

    if (stack_empty(&st)) {
        fprintf(stderr, "Error: Invalid expression\n");
        return -1;
    }

    return stack_top(&st);
}

int main() {
    char postfixExpr[] = "231*+9-";
    printf("Result of postfix evaluation: %d\n", evaluatePostfix(postfixExpr));
    return 0;
}
