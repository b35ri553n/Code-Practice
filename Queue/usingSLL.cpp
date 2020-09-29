#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Queue {
    struct Node *front, *rear;
    int size;
    Queue () {
        front = rear = NULL;
        size = 0;
    }
    void enque (int x) {
        struct Node *temp = new Node(x);
        ++size;
        if (!front) {
            front = rear = temp;
            return;
        }
        rear -> next = temp;
        rear = temp;
    }
    void deque () {
        if (!front) return;
        --size;
        struct Node *temp = front;
        front = front -> next;
        if (!front) rear = NULL;
        delete(temp);
    }
    int getSize() {
        return size;
    }
    void displayQueue() { 
        if (!front) { 
            cout << "\nQueue is Empty"; 
            return; 
        } 
        cout << "Elements in Circular Queue are: "; 
        struct Node *temp = front;
        while (temp != NULL) {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    } 
};

int main() {
    struct Queue q = Queue();
    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.deque();
    q.deque();
    q.enque(40);
    // q.deque();
    q.displayQueue();
    cout << "Size is " << q.getSize();
    return 0;
}