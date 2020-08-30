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

void findMiddle(Node *head) {
    if(!head) return;
    Node *slow = head, *fast = head;
    while((fast -> next) && fast) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    cout << (slow -> data);
}

int main() {
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    findMiddle(head);
    return 0;
}