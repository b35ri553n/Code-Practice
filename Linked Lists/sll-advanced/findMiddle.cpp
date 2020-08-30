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

int findMiddle(Node *head) {
    Node *curr;
    int count = 0;
    for(curr = head; curr; curr = curr -> next)
        ++count;
    curr = head;
    for(int i = 0; i < count / 2; ++i){
        curr = curr -> next;
    }
    return curr -> data;
}

int main() {
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    cout << findMiddle(head);
    return 0;
}