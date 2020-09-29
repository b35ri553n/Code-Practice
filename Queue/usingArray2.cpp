#include <bits/stdc++.h>
using namespace std;

//EFFICIENT SOLUTION
struct Queue {
    int size, cap, front;
    int *arr;
    Queue (int c) {
        cap = c;
        size = 0;
        front = 0;
        arr = new int[c];
    }
    bool isEmpty() { return (size == 0); }
    bool isFull() { return (size == cap); }
    int getFront() {
        if (isEmpty()) return -1;
        else return front;
    }
    int getRear() {
        if (isEmpty()) return -1;
        else return (front + size - 1) % cap;
    }
    void enque(int x) {
        if (isFull()) return;
        else {
            int rear = getRear();
            rear = (rear + 1) % cap;
            arr[rear] = x;
            ++size;
        }
    }
    void deque() {
        if(isEmpty()) return;
        else {
            front = (front + 1) % cap;
            --size;
        }
    }
    void displayQueue() { 
        if (isEmpty()) { 
            cout << "\nQueue is Empty"; 
            return; 
        } 
        cout << "\nElements in Circular Queue are: "; 
        int rear = getRear();
        if (rear >= front) { 
            for (int i = front; i <= rear; i++) 
                cout << arr[i] << " "; 
        } 
        else { 
            for (int i = front; i < size; i++) 
                cout << arr[i] << " "; 
            for (int i = 0; i <= rear; i++) 
                cout << arr[i] << " "; 
        } 
    } 
};

int main() {
    struct Queue q = Queue(4);
    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.deque();
    q.deque();
    q.enque(40);
    // q.deque();
    q.displayQueue();
    return 0;
}