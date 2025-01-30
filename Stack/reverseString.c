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

void reverseString(char *s){
    stack st;
    st.top = -1;
    
    for (int i = 0; i < strlen(s); i++)
        push(&st, s[i]);
    
    for (int i = 0; i < strlen(s); i++){
        s[i] = top(&st);
        pop(&st);
    }
}

int main(){
    char s[] = "Hello, World!";
    reverseString(s);
    printf("%s\n", s);
    return 0;
}