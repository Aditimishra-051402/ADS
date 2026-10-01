#include <iostream>
#include <stack>

using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op=='^')
    return 3;
    return 0;
}

bool isRightAssociative(char op) {
    return op == '^';
}

int main() {
    string Q,P;
    cout << "Enter an infix expression: ";
    cin >> Q>>P;
}
   