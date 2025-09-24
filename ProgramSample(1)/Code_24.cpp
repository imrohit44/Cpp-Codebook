#include <iostream>

const int MAX_SIZE = 100;

class Stack {
private:
    int arr[MAX_SIZE];
    int top;
public:
    Stack() { top = -1; }

    bool isEmpty() { return top == -1; }
    bool isFull() { return top == MAX_SIZE - 1; }

    void push(int data) {
        if (isFull()) {
            std::cout << "Stack overflow!" << std::endl;
            return;
        }
        arr[++top] = data;
    }

    int pop() {
        if (isEmpty()) {
            std::cout << "Stack underflow!" << std::endl;
            return -1;
        }
        return arr[top--];
    }

    int peek() {
        if (isEmpty()) {
            std::cout << "Stack is empty." << std::endl;
            return -1;
        }
        return arr[top];
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    std::cout << "Top element is: " << s.peek() << std::endl;
    s.pop();
    std::cout << "Top element after pop: " << s.peek() << std::endl;
    return 0;
}