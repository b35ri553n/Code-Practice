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

Node *delB(Node *head) {
    if(!head) return NULL;
    else {
        Node *temp = head -> next;
        delete head;
        return temp;
    }
}

int main(){
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head = delB(head);
    traverseNprint(head);
    return 0;
}