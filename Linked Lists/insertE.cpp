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
    cout << endl;
}

Node *insertE(Node *head, int x) {
    Node *temp = new Node(x);
    if(head == NULL) return temp;
    Node *curr = head;
    while(curr -> next != NULL){
        curr  = curr -> next;
    }
    curr -> next = temp;
    return head;
}

int main() {
    Node *head = NULL;
    head = insertE(head, 30);
    traverseNprint(head);
    head = insertE(head, 20);
    traverseNprint(head);
    head = insertE(head, 10);
    traverseNprint(head);
    return 0;
}