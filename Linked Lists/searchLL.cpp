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

int searchLL(Node *head, int x) {
    Node *curr = head;
    int position = 1;
    while(curr != NULL) {
        if(curr -> data == x) {
            return position;
        }
        else {
            ++position;
            curr = curr -> next;
        }
    }
    return -1;
}

int main() {
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    cout << searchLL(head, 50);
    return 0;
}