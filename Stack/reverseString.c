#include<stdio.h>
#include<string.h>
#include "stack.h"

void reverseString(char *s){
    stack st;
    st.top = -1;
    
    for (int i = 0; i < strlen(s); i++)
        stack_push(&st, s[i]);
    
    for (int i = 0; i < strlen(s); i++){
        s[i] = stack_top(&st);
        stack_pop(&st);
    }
}

int main(){
    char s[] = "Hello, World!";
    reverseString(s);
    printf("%s\n", s);
    return 0;
}