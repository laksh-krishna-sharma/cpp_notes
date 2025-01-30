#include <stdio.h>

typedef struct stack {
    int data[100];
    int top;
} stack ;

int empty(stack *s) {return (s->top == -1);}
int top(stack *s) {return s->data[s->top];}
void push(stack *s, int x) {s->data[++s->top] = x;}
void pop(stack *s) {if (!empty(s)) s->top--;}

int main(){
    stack s;
    s.top = -1;
    
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    
    printf("%d\n", top(&s));
    
    pop(&s);
    printf("%d\n", top(&s));
    
    pop(&s);
    printf("%d\n", top(&s));
    
    pop(&s);
    printf("%d\n", top(&s));

    return 0;
}