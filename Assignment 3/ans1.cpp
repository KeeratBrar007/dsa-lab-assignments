#include <iostream>
using namespace std;
int n=100;
int stackArr[100];
int top = -1;
void push(int x) {
    if (top == n- 1) {
        cout << "Stack Overflow! Cannot push " << x << endl;
    } else {
        stackArr[++top] = x;
        cout << x << " pushed into stack." << endl;
    }
}
void pop() {
    if (top == -1) {
        cout << "Stack Underflow! Nothing to pop." << endl;
    } else {
        cout << stackArr[top--] << " popped from stack." << endl;
    }
}
void isEmpty() {
    if (top == -1)
        cout << "Stack is Empty." << endl;
    else
        cout << "Stack is NOT Empty." << endl;
}
void isFull() {
    if (top == n - 1)
        cout << "Stack is Full." << endl;
    else
        cout << "Stack is NOT Full." << endl;
}
void display() {
    if (top == -1) {
        cout << "Stack is Empty." << endl;
    } else {
        cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--) {
            cout << stackArr[i] <<"\t";
        }
        cout << endl;
    }
}
void peek() {
    if (top == -1) {
        cout << "Stack is Empty. No top element." << endl;
    } else {
        cout << "Top element is: " << stackArr[top] << endl;
    }
}

int main() {
    int choice, value;
    do {
        cout << "\n--- Stack Menu ---" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. isEmpty" << endl;
        cout << "4. isFull" << endl;
        cout << "5. Display" << endl;
        cout << "6. Peek" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            isEmpty();
            break;
        case 4:
            isFull();
            break;
        case 5:
            display();
            break;
        case 6:
            peek();
            break;
        case 7:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 7);

    return 0;
}