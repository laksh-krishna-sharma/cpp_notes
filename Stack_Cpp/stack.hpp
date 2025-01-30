#ifndef STACK_HPP
#define STACK_HPP

#include <bits/stdc++.h>

class Stack {
private:
    static const int STACK_SIZE = 100;
    int data[STACK_SIZE];
    int top;

public:
    Stack();                  
    bool isEmpty() const;      
    bool isFull() const;       
    int peek() const;          
    void push(int value);      
    void pop();                
};

#endif // STACK_HPP
