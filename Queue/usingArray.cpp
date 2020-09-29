#include <bits/stdc++.h>
using namespace std;

//SIMPLE IMPLEMENTATION 
//TIME COMPLEXITY: O(n)
struct Queue {
    int size, cap;
    int *arr;
    Queue (int c) {
        cap = c;
        size = 0;
        arr = new int[c];
    }
    bool isEmpty() { return (size == 0); }
    bool isFull() { return (size == cap); }
    int getFront() {
        if (isEmpty()) return -1;
        else return 0;
    }
    int getRear() {
        if (isEmpty()) return -1;
        else return (size - 1);
    }
    void enque(int x) {
        if (isFull()) return;
        else {
            arr[size] = x;
            ++size;
        }
    }
    void deque() {
        if(isEmpty()) return;
        else {
            for (int i = 0; i < size -1; ++i)
                arr[i + 1] = arr[i];
            --size;
        }
    }
};

int main() {
    struct Queue q = Queue(4);
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    q.deque();
    cout << q.getFront() << " " << q.getRear();
    return 0;
}