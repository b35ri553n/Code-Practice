#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next; 
    Node(int x) { 
        data = x;
        next = NULL;
    }
};

void display(Node *head) {
    Node *curr = head;
    while(curr != NULL) {
    cout << curr -> data << " ";
    curr = curr -> next;
    }
}

//Since insertion and deletion happens at same end, they're done at head in case of SLL

Node* push(Node *head, int x) {
    Node *temp = new Node(x);
    temp -> next = head;
    head = temp;
    return head;
}

int pop(Node *head) {
    if(!head) return -1;
    int res = head -> data;
    Node *temp = head;
    head = head -> next;
    delete(temp);
    return res;
}

int main() {
    Node *head = NULL;
    head = push(head, 10);
    head = push(head, 20);
    head = push(head, 30);
    display(head);
    int res = pop(head);
    cout << endl << res;
    display(head);
    return 0;
}