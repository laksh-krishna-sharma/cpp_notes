#include<stdio.h>
#include<string.h>

typedef struct stack {
    int data[100];
    int top;
} stack ;

int empty(stack *s) {return (s->top == -1);}
int top(stack *s) {return s->data[s->top];}
void push(stack *s, int x) {s->data[++s->top] = x;}
void pop(stack *s) {if (!empty(s)) s->top--;}

// write postfix evaluation function here
int evaluatePostfix(char *s){
    stack st;
    st.top = -1;
    int n = strlen(s);
    for(int i = 0; i < n; i++){
        if(s[i] >= '0' && s[i] <= '9'){
            push(&st, s[i] - '0');
        } else {
            int a = top(&st);
            pop(&st);
            int b = top(&st);
            pop(&st);
            if(s[i] == '+'){
                push(&st, a + b);
            } else if(s[i] == '-'){
                push(&st, b - a);
            } else if(s[i] == '*'){
                push(&st, a * b);
            } else if(s[i] == '/'){
                push(&st, b / a);
            }
        }
    }
    return top(&st);
}

int main(){
    char postfixExpr[] = "231*+9-";
    printf("Result of postfix evaluation: %d\n", evaluatePostfix(postfixExpr));
    return 0;
}