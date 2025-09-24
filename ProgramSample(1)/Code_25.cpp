#include <iostream>

const int MAX_SIZE_Q = 100;

class Queue {
private:
    int arr[MAX_SIZE_Q];
    int front, rear;
public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() { return front == -1; }
    bool isFull() { return rear == MAX_SIZE_Q - 1; }

    void enqueue(int data) {
        if (isFull()) {
            std::cout << "Queue is full!" << std::endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        arr[++rear] = data;
    }

    int dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty!" << std::endl;
            return -1;
        }
        int data = arr[front];
        if (front >= rear) {
            front = -1;
            rear = -1;
        } else {
            front++;
        }
        return data;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    std::cout << "Dequeued element: " << q.dequeue() << std::endl;
    q.enqueue(30);
    std::cout << "Dequeued element: " << q.dequeue() << std::endl;
    return 0;
}