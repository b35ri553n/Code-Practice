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

Node *delE(Node *head) {
    if(!head) return NULL;
    if(!(head -> next)) {
        delete head;
        return NULL;
    }
    Node *temp = head;
    while(temp -> next -> next)
        temp = temp -> next;
    delete temp -> next;
    temp -> next = NULL;
    return head;
}

int main(){
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head = delE(head);
    traverseNprint(head);
    return 0;
}