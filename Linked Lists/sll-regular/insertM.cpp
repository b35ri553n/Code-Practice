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

Node *insertM(Node *head, int pos, int data) {
    Node *temp = new Node(data);
    if(pos == 1) {
        temp -> next = head;
        return temp;
    }
    Node *curr = head;
    for(int i = 0; i < pos - 2 && curr != NULL; ++i) {
        curr = curr -> next;
    }
    if(!curr){
        return head;
    }
    temp -> next = curr -> next;
    curr -> next = temp;
    return head;
}

int main() {
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head = insertM(head, 5, 5);
    traverseNprint(head);
    return 0;
}