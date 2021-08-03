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

void traverseNprint(Node *head) {
    Node *curr = head;
    while(curr != NULL) {
    cout << curr -> data << " ";
    curr = curr -> next;
    }
}

Node *reverseSLL(Node *head) {
    if(!head) return head;
    Node *prev = NULL;
    Node *curr = head;
    while(curr){
        Node *after = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = after;
    }
    return prev;
}

int main() {
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    head -> next -> next -> next -> next = new Node(50);
    Node *rev = reverseSLL(head);
    traverseNprint(rev);
    return 0;
}