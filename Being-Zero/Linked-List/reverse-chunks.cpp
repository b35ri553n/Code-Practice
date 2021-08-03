// Given a linked list head and k, Modify the linked list in such a way that Each part of k-length is reversed in its own. Don't create a new list, Re-Adjust same list.
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

Node *reverseChunks(Node *head, int k) {
    if(!head) return head;
    Node *curr = head, *prev = NULL, *next;
    int c = 0;
    while(curr && c < k) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        c++;
    }
    if(next) head -> next = reverseChunks(next, k);
    return prev;
}

int main() {
    int k;
    cin >> k;
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    head -> next -> next -> next -> next = new Node(50);
    Node *rev = reverseChunks(head, k);
    traverseNprint(rev);
    return 0;
}