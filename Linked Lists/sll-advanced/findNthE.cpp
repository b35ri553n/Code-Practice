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

void findNthE(Node *head, int n) {
    if(!head) return;
    Node *curr;
    int count = 0;
    for(curr = head; curr; curr = curr -> next)
        ++count;
    if(count < n) return;
    curr = head; 
    for(int i = 0; i < (count - n); ++i)
        curr = curr -> next;
    cout << curr -> data;
}

int main() {
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    head -> next -> next -> next -> next = new Node(50);
    findNthE(head, 6);
    return 0;
}