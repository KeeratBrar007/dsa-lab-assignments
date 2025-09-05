#include <iostream>
#include <string>
using namespace std;
int n = 100;
char stackArr[100];
int top = -1;
void push(char ch)
{
    if (top == n - 1)
    {
        cout << "Stack Overflow!" << endl;
    }
    else
    {
        stackArr[++top] = ch;
    }
}
char pop()
{
    if (top == -1)
    {
        return '\0';
    }
    else
    {
        return stackArr[top--];
    }
}
bool isMatchingPair(char open, char close)
{
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}
bool isBalanced(string expr)
{
    for (int i = 0; i < expr.length(); i++)
    {
        char ch = expr[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (top == -1)
                return false;
            char open = pop();
            if (!isMatchingPair(open, ch))
                return false;
        }
    }
    return (top == -1);
}
int main()
{
    string expr;
    cout << "Enter an expression: ";
    getline(cin, expr);
    if (isBalanced(expr))
        cout << "Expression is Balanced." << endl;
    else
        cout << "Expression is NOT Balanced." << endl;

    return 0;
}