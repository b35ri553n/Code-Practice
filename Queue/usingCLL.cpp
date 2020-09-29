#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct  Node *next;
};

struct Node *front = 0;
struct Node *rear = 0;

void enque(int x) {
    struct Node *newnode = new Node;
    newnode -> data = x;
    newnode -> next = 0;
    if(!rear) {
        front = rear = newnode;
        rear -> next = front;      //newnode points to itself since it is the only node
    }
    else {
        rear -> next = newnode;
        rear = newnode;
        rear -> next = front;
    }
}

void dequeue() {
    struct Node *temp = front;
    if(!front && !rear) return; //underflow condition
    else if(front == rear) {
        front = rear = 0;
        delete(temp);
    } 
    else {
        front = front -> next;
        rear -> next = front;
        delete(temp);
    }
}

void peek() {
    if(!front) cout << "empty queue" << endl;
    else {
        cout << front -> data << endl;
    }
}

void display() {
    struct Node *temp = front;
    if(!front) cout << "empty queue" << endl;
    else {
        while(temp -> next != front) {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }
}

int main() {
    enque(2);
    enque(-1);
    display();
    dequeue();
    peek(); //display data of front
    return 0;
}