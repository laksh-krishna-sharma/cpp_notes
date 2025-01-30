#include <bits/stdc++.h>
#include "stack.hpp"

int evaluatePostfix(const std::string& expression) {
    Stack st;

    for (char ch : expression) {
        if (isdigit(ch)) {
            st.push(ch - '0');  // Convert char to int
        } else {
            if (st.isEmpty()) throw std::runtime_error("Invalid expression");

            int a = st.peek(); 
            st.pop();

            if (st.isEmpty()) throw std::runtime_error("Invalid expression");

            int b = st.peek(); 
            st.pop();

            switch (ch) {
                case '+': st.push(b + a); break;
                case '-': st.push(b - a); break;
                case '*': st.push(b * a); break;
                case '/': 
                    if (a == 0) throw std::runtime_error("Division by zero");
                    st.push(b / a); 
                    break;
                default: throw std::runtime_error("Invalid operator");
            }
        }
    }

    return st.peek();
}

int main() {
    std::string postfixExpr = "231*+9-";
    try {
        std::cout << "Result of postfix evaluation: " << evaluatePostfix(postfixExpr) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
