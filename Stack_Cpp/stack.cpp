#include "stack.hpp"

Stack::Stack() : top(-1) {}

bool Stack::isEmpty() const {
    return top == -1;
}

bool Stack::isFull() const {
    return top == STACK_SIZE - 1;
}

int Stack::peek() const {
    if (isEmpty()) {
        throw std::underflow_error("Stack underflow: Cannot peek an empty stack.");
    }
    return data[top];
}

void Stack::push(int value) {
    if (isFull()) {
        throw std::overflow_error("Stack overflow: Cannot push more elements.");
    }
    data[++top] = value;
}

void Stack::pop() {
    if (isEmpty()) {
        throw std::underflow_error("Stack underflow: Cannot pop from an empty stack.");
    }
    top--;
}
