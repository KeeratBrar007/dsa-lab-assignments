#include <iostream>
#include <string>
using namespace std;
int n=100;
char stackArr[100];
int top = -1;
void push(char ch) {
    if (top == n - 1) {
        cout << "Stack Overflow!" << endl;
    } else {
        stackArr[++top] = ch;
    }
}
char pop() {
    if (top == -1) {
        cout << "Stack Underflow!" << endl;
        return '\0';
    } else {
        return stackArr[top--];
    }
}
int main() {
    string str, rev = "";
    cout << "Enter a string: ";
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        push(str[i]);
    }
    while (top != -1) {
        rev += pop();
    }
    cout << "Reversed string: " << rev << endl;
    return 0;
}