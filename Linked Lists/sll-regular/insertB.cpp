#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next; 
    Node(int x) { 
            data = x;
            next = NULL;
    }
};

Node *insertB(Node *head, int x) {
    Node *temp = new Node(x);
    temp -> next = head;
    return temp;
}

int main() {
    Node *head = NULL;
    head = insertB(head, 30);
    head = insertB(head, 20);
    head = insertB(head, 10);
    return 0;
}