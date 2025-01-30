#include <bits/stdc++.h>
#include "stack.hpp"

void reverseString(std::string& str) {
    Stack st;

    for (char ch : str) {
        st.push(ch);  // Store char in stack
    }

    for (char& ch : str) {
        ch = st.peek();
        st.pop();
    }
}

int main() {
    std::string str = "Hello, World!";
    reverseString(str);
    std::cout << str << std::endl;
    return 0;
}
