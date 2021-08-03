// Given a singly linked list and two integers S and E.  reverse the linked list node between start and end (Inclusive)
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

// we are going to bring nodeToBeExtracted to the front of sublist always
Node *reversePortion(Node *head, int s, int e) {
    if(!head || s == e) return head;
    Node *dummy = new Node(0), *nodeBeforeStart = dummy, *workingPointer, *nodeToBeExtracted;
    dummy -> next = head;
    for(int i = 1; i < s; i++)
        nodeBeforeStart = nodeBeforeStart -> next;
    workingPointer = nodeBeforeStart -> next;
    while(s < e) {
        nodeToBeExtracted = workingPointer -> next;
        workingPointer -> next = nodeToBeExtracted -> next;
        nodeToBeExtracted -> next = nodeBeforeStart -> next;
        nodeBeforeStart -> next = nodeToBeExtracted;
        s++;
    }
    return dummy -> next;
}

int main() {
    int s, e;
    cin >> s >> e;
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    head -> next -> next -> next -> next = new Node(50);
    Node *rev = reversePortion(head, s, e);
    traverseNprint(rev);
    return 0;
}